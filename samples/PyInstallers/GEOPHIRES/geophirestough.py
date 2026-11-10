import json
import os
import time
import sys
from geophires_x_client import GeophiresXClient
from geophires_x_client.geophires_input_parameters import GeophiresInputParameters

# Install GEOPHIRES-X and PyInstaller in the Python environment used to build:
# use GEOPHIRES-X fork at https://github.com/sjanzou/GEOPHIRES-X for TOUGH2_reservoir_simulation_results used below
#   python -m pip install pyinstaller
#   git clone https://github.com/sjanzou/GEOPHIRES-X.git into C:/Projects/Github/NREL/my-geophires-project/geophires-x
#   cd C:/Projects/Github/NREL/my-geophires-project/geophires-x
#   python -m pip install -e .
# Build a standalone executable from this directory:
# Windows command to build the executable:
#   pyinstaller --noconfirm --onefile --console --name "geophirestough" --paths "C:/Projects/Github/NREL/my-geophires-project/geophires-x/src/geophires_x" --paths "C:/Projects/Github/NREL/my-geophires-project/geophires-x/src/geophires_x_client" --add-data "C:/Projects/Github/NREL/my-geophires-project/geophires-x/src/geophires_x;geophires_x" --add-data "C:/Projects/Github/NREL/my-geophires-project/geophires-x/src/geophires_x_client;geophires_x_client"  --clean geophirestough.py
#   The built executable will be located in the dist folder.
# copy the built executable geophirestough.exe to the SAM/deploy/runtime/bin folder.
# Run from a Geothermal case in SAM from the Macros tab and select the Geothermal TOUGH Reservoir macro.
# The request supplies the TOUGH2 executable path; the response is written to
# py_response.json in that same temporary directory.

is_frozen = getattr(sys, 'frozen', False)
real_cpp_dir = os.path.abspath(os.path.dirname(sys.executable if is_frozen else __file__))
if os.path.basename(real_cpp_dir).lower() in ["dist", "release", "debug"]:
    real_cpp_dir = os.path.dirname(real_cpp_dir)


def main():

    client = GeophiresXClient()

    if len(sys.argv) > 1:
        temp_dir = sys.argv[1]
        print(f"Success! The argument passed was: {temp_dir}")
    else:
        print("No argument was passed.")
        return

    cpp_request_file = os.path.abspath(os.path.normpath(os.path.join(temp_dir, "cpp_request.json")))

    input_data = {}
    file_load_success = False
    for lock_retry in range(20):
        if os.path.exists(cpp_request_file) and os.path.getsize(cpp_request_file) > 10:
            try:
                with open(cpp_request_file, "r", encoding='utf-8', errors='ignore') as f:
                    input_data = json.load(f)
                if input_data and "lifetime" in input_data:
                    file_load_success = True
                    break
            except Exception: time.sleep(0.1)
        else: time.sleep(0.1)

    if not file_load_success or not input_data:
        print(f"MATRIX_DATA:{json.dumps({'status': 'error', 'message': 'cpp_request.json is locked or missing on disk'})}", flush=True)
        return

    result = client.get_geophires_result(
        GeophiresInputParameters({
                "Reservoir Model": int(input_data.get("Reservoir Model", 6)),
                "TOUGH2 Model/File Name": input_data.get("TOUGH2 Model/File Name", "Doublet"),
                "Reservoir Depth": float(input_data.get("Reservoir Depth", 3.0)),
                "Number of Segments": int(input_data.get("Number of Segments", 1)),
                "Gradient 1": float(input_data.get("Gradient 1", 50.0)),
                "Maximum Temperature": float(input_data.get("Maximum Temperature", 375.0)),
                "Number of Production Wells": int(input_data.get("Number of Production Wells", 1)),
                "Number of Injection Wells": int(input_data.get("Number of Injection Wells", 1)),
                "Production Well Diameter": float(input_data.get("Production Well Diameter", 8.0)),
                "Injection Well Diameter": float(input_data.get("Injection Well Diameter", 8.0)),
                "Ramey Production Wellbore Model": int(input_data.get("Ramey Production Wellbore Model", 1)),
                "Injection Wellbore Temperature Gain": float(input_data.get("Injection Wellbore Temperature Gain", 0.0)),
                "Production Flow Rate per Well": float(input_data.get("Production Flow Rate per Well", 50.0)),
                "Reservoir Volume Option": int(input_data.get("Reservoir Volume Option", 4)),
                "Reservoir Volume": float(input_data.get("Reservoir Volume", 1000000000.0)),
                "Water Loss Fraction": float(input_data.get("Water Loss Fraction", 0.0)),
                "Reservoir Impedance": float(input_data.get("Reservoir Impedance", 0.05)),
                "Injection Temperature": float(input_data.get("Injection Temperature", 70.0)),
                "Reservoir Heat Capacity": float(input_data.get("Reservoir Heat Capacity", 1050.0)),
                "Reservoir Density": float(input_data.get("Reservoir Density", 2700.0)),
                "Reservoir Thermal Conductivity": float(input_data.get("Reservoir Thermal Conductivity", 3.0)),
                "Reservoir Porosity": float(input_data.get("Reservoir Porosity", 0.05)),
                "Reservoir Permeability": float(input_data.get("Reservoir Permeability", 6E-13)),
                "Reservoir Thickness": float(input_data.get("Reservoir Thickness", 250.0)),
                "Reservoir Width": float(input_data.get("Reservoir Width", 500.0)),
                "Well Separation": float(input_data.get("Well Separation", 900.0)),
                "End-Use Option": int(input_data.get("End-Use Option", 2)),
                "Circulation Pump Efficiency": float(input_data.get("Circulation Pump Efficiency", 0.8)),
                "Utilization Factor": float(input_data.get("Utilization Factor", 0.9)),
                "End-Use Efficiency Factor": float(input_data.get("End-Use Efficiency Factor", 0.9)),
                "Surface Temperature": float(input_data.get("Surface Temperature", 15.0)),
                "Ambient Temperature": float(input_data.get("Ambient Temperature", 15.0)),
                "Plant Lifetime": int(input_data.get("Plant Lifetime", 30)),
                "Economic Model": int(input_data.get("Economic Model", 2)),
                "Discount Rate": float(input_data.get("Discount Rate", 0.05)),
                "Field Gathering System Capital Cost Adjustment Factor": float(input_data.get("Field Gathering System Capital Cost Adjustment Factor", 1.0)),
                "Exploration Capital Cost Adjustment Factor": float(input_data.get("Exploration Capital Cost Adjustment Factor", 1.0)),
                "Wellfield O&M Cost Adjustment Factor": float(input_data.get("Wellfield O&M Cost Adjustment Factor", 1.0)),
                "Surface Plant O&M Cost Adjustment Factor": float(input_data.get("Surface Plant O&M Cost Adjustment Factor", 1.0)),
                "Water Cost Adjustment Factor": float(input_data.get("Water Cost Adjustment Factor", 1.0)),
                "Electricity Rate": float(input_data.get("Electricity Rate", 0.07)),
                "Print Output to Console": int(input_data.get("Print Output to Console", 1)),
                "Time steps per year": int(input_data.get("Time steps per year", 4)),
                "TOUGH2 Executable Path": str(input_data.get("TOUGH2 Executable Path"))
        })
    )

    x= result.TOUGH2_reservoir_simulation_results[1:]

    response = {
        "status": "success",
        "matrix_rows": len(x),
        "matrix_cols": 3,
        "matrix_data": []
    }
    for i in range(len(x)):
        response["matrix_data"].extend([x[i][0], x[i][1], x[i][2]])

    cpp_response_file = os.path.join(temp_dir, "py_response.json")
    with open(cpp_response_file, "w", encoding='utf-8') as f:
        json.dump(response, f)
        f.flush()
        os.fsync(f.fileno())

if __name__ == "__main__":
    main()
