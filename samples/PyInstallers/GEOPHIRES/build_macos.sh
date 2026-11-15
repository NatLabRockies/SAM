pyinstaller --noconfirm --onefile --console --name "geophirestough.bin" --paths "/Users/imacuser/Public/Projects/GitHub/NREL/my-geophires-project/geophires-x/src/geophires_x" --paths "/Users/imacuser/Public/Projects/GitHub/NREL/my-geophires-project/geophires-x/src/geophires_x_client" --add-data  "/Users/imacuser/Public/Projects/GitHub/NREL/my-geophires-project/geophires-x/src/geophires_x:geophires_x"  --add-data "/Users/imacuser/Public/Projects/GitHub/NREL/my-geophires-project/geophires-x/src/geophires_x_client:geophires_x_client"   --clean geophirestough.py
cp ./dist/geophirestough.bin ../../../deploy/runtime/bin
rm -rf build
rm -rf dist
rm *.spec