import os
import subprocess

def update_dylib_paths(directory_path, old_prefix):
    # Find all .dylib files in the directory
    for root, _, files in os.walk(directory_path):
        for file in files:
            if not file.endswith('.dylib'):
                continue
                
            file_path = os.path.join(root, file)
            print(f"\nProcessing: {file_path}")
            
            # 1. Remove code signature to prevent install_name_tool errors
            subprocess.run(['codesign', '--remove-signature', file_path], stderr=subprocess.DEVNULL)
            
            # 2. Update the library's internal ID to use @rpath
            new_id = f"@rpath/{file}"
            subprocess.run(['install_name_tool', '-id', new_id, file_path])
            
            # 3. Read dependencies using otool
            output = subprocess.check_output(['otool', '-L', file_path]).decode('utf-8')
            lines = output.splitlines()[1:]  # Skip first line
            
            # 4. Loop through dependencies and swap old paths for @loader_path or @rpath
            for line in lines:
                parts = line.strip().split()
                if not parts:
                    continue
                old_dep_path = parts[0]
                
                if old_dep_path.startswith(old_prefix):
                    # For example, swap absolute path to @loader_path
                    filename = os.path.basename(old_dep_path)
                    new_dep_path = f"@loader_path/{filename}" 
                    
                    print(f"  Changing dependency: {old_dep_path} -> {new_dep_path}")
                    subprocess.run(['install_name_tool', '-change', old_dep_path, new_dep_path, file_path])
            
            # 5. Add an @rpath search entry to the file so it knows where to look
            # This adds the current directory of the binary to its search path
            subprocess.run(['install_name_tool', '-add_rpath', '@loader_path/.', file_path], stderr=subprocess.DEVNULL)
            
            # 6. Re-sign the binary ad-hoc
            subprocess.run(['codesign', '--sign', '-', file_path], stderr=subprocess.DEVNULL)

# Example Usage:
# Convert all libraries in './libs' that used to point to '/usr/local/lib/'
# update_dylib_paths('./libs', '/usr/local/lib/')
