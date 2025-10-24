#include <string>
#include <utility>
#include <vector>
#include <memory>
#include <iostream>

#include <ssc/sscapi.h>

#include "SAM_api.h"
#include "ErrorHandler.h"
#include "SAM_MhkCosts.h"

SAM_EXPORT int SAM_MhkCosts_execute(SAM_table data, int verbosity, SAM_error* err){
	return SAM_module_exec("mhk_costs", data, verbosity, err);
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_assembly_and_install_cost_input_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "assembly_and_install_cost_input", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_assembly_and_install_cost_method_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "assembly_and_install_cost_method", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_assembly_and_install_cost_rvalue_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "assembly_and_install_cost_rvalue", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_assembly_and_install_cost_total_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "assembly_and_install_cost_total", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_development_cost_input_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "development_cost_input", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_development_cost_method_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "development_cost_method", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_development_cost_rvalue_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "development_cost_rvalue", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_development_cost_total_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "development_cost_total", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_device_rated_power_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "device_rated_power", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_devices_per_row_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "devices_per_row", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_elec_infras_cost_input_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "elec_infras_cost_input", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_elec_infras_cost_method_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "elec_infras_cost_method", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_elec_infras_cost_modeled_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "elec_infras_cost_modeled", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_elec_infras_cost_rvalue_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "elec_infras_cost_rvalue", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_elec_infras_cost_total_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "elec_infras_cost_total", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_eng_and_mgmt_cost_input_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "eng_and_mgmt_cost_input", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_eng_and_mgmt_cost_method_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "eng_and_mgmt_cost_method", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_eng_and_mgmt_cost_rvalue_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "eng_and_mgmt_cost_rvalue", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_eng_and_mgmt_cost_total_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "eng_and_mgmt_cost_total", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_export_cable_length_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "export_cable_length", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_insurance_during_construction_cost_input_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "insurance_during_construction_cost_input", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_insurance_during_construction_cost_method_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "insurance_during_construction_cost_method", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_insurance_during_construction_cost_rvalue_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "insurance_during_construction_cost_rvalue", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_inter_array_cable_length_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inter_array_cable_length", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_lib_tidal_device_sset(SAM_table ptr, const char* str, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_string(ptr, "lib_tidal_device", str);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_lib_wave_device_sset(SAM_table ptr, const char* str, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_string(ptr, "lib_wave_device", str);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_library_or_input_wec_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "library_or_input_wec", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_maintenance_cost_input_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "maintenance_cost_input", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_maintenance_cost_method_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "maintenance_cost_method", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_maintenance_cost_rvalue_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "maintenance_cost_rvalue", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_maintenance_cost_total_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "maintenance_cost_total", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_marine_energy_tech_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "marine_energy_tech", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_mooring_found_substruc_cost_input_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mooring_found_substruc_cost_input", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_mooring_found_substruc_cost_method_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mooring_found_substruc_cost_method", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_mooring_found_substruc_cost_rvalue_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mooring_found_substruc_cost_rvalue", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_mooring_found_substruc_cost_total_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "mooring_found_substruc_cost_total", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_operations_cost_input_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "operations_cost_input", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_operations_cost_method_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "operations_cost_method", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_operations_cost_rvalue_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "operations_cost_rvalue", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_operations_cost_total_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "operations_cost_total", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_other_financial_cost_input_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "other_financial_cost_input", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_other_financial_cost_method_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "other_financial_cost_method", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_other_financial_cost_rvalue_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "other_financial_cost_rvalue", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_other_infrastructure_cost_input_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "other_infrastructure_cost_input", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_other_infrastructure_cost_method_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "other_infrastructure_cost_method", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_other_infrastructure_cost_rvalue_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "other_infrastructure_cost_rvalue", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_other_infrastructure_cost_total_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "other_infrastructure_cost_total", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_plant_commissioning_cost_input_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "plant_commissioning_cost_input", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_plant_commissioning_cost_method_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "plant_commissioning_cost_method", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_plant_commissioning_cost_rvalue_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "plant_commissioning_cost_rvalue", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_power_takeoff_system_cost_input_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "power_takeoff_system_cost_input", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_power_takeoff_system_cost_method_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "power_takeoff_system_cost_method", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_power_takeoff_system_cost_total_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "power_takeoff_system_cost_total", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_project_contingency_cost_input_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "project_contingency_cost_input", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_project_contingency_cost_method_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "project_contingency_cost_method", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_project_contingency_cost_rvalue_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "project_contingency_cost_rvalue", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_reserve_accounts_cost_input_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "reserve_accounts_cost_input", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_reserve_accounts_cost_method_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "reserve_accounts_cost_method", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_reserve_accounts_cost_rvalue_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "reserve_accounts_cost_rvalue", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_reserve_accounts_cost_total_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "reserve_accounts_cost_total", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_riser_cable_length_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "riser_cable_length", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_site_access_port_staging_cost_input_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "site_access_port_staging_cost_input", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_site_access_port_staging_cost_method_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "site_access_port_staging_cost_method", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_site_access_port_staging_cost_rvalue_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "site_access_port_staging_cost_rvalue", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_site_access_port_staging_cost_total_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "site_access_port_staging_cost_total", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_structural_assembly_cost_input_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "structural_assembly_cost_input", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_structural_assembly_cost_method_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "structural_assembly_cost_method", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_structural_assembly_cost_rvalue_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "structural_assembly_cost_rvalue", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_structural_assembly_cost_total_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "structural_assembly_cost_total", number);
	});
}

SAM_EXPORT void SAM_MhkCosts_MHKCosts_system_capacity_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "system_capacity", number);
	});
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_assembly_and_install_cost_input_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "assembly_and_install_cost_input", &result))
		make_access_error("SAM_MhkCosts", "assembly_and_install_cost_input");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_assembly_and_install_cost_method_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "assembly_and_install_cost_method", &result))
		make_access_error("SAM_MhkCosts", "assembly_and_install_cost_method");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_assembly_and_install_cost_rvalue_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "assembly_and_install_cost_rvalue", &result))
		make_access_error("SAM_MhkCosts", "assembly_and_install_cost_rvalue");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_assembly_and_install_cost_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "assembly_and_install_cost_total", &result))
		make_access_error("SAM_MhkCosts", "assembly_and_install_cost_total");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_development_cost_input_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "development_cost_input", &result))
		make_access_error("SAM_MhkCosts", "development_cost_input");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_development_cost_method_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "development_cost_method", &result))
		make_access_error("SAM_MhkCosts", "development_cost_method");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_development_cost_rvalue_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "development_cost_rvalue", &result))
		make_access_error("SAM_MhkCosts", "development_cost_rvalue");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_development_cost_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "development_cost_total", &result))
		make_access_error("SAM_MhkCosts", "development_cost_total");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_device_rated_power_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "device_rated_power", &result))
		make_access_error("SAM_MhkCosts", "device_rated_power");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_devices_per_row_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "devices_per_row", &result))
		make_access_error("SAM_MhkCosts", "devices_per_row");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_elec_infras_cost_input_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "elec_infras_cost_input", &result))
		make_access_error("SAM_MhkCosts", "elec_infras_cost_input");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_elec_infras_cost_method_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "elec_infras_cost_method", &result))
		make_access_error("SAM_MhkCosts", "elec_infras_cost_method");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_elec_infras_cost_modeled_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "elec_infras_cost_modeled", &result))
		make_access_error("SAM_MhkCosts", "elec_infras_cost_modeled");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_elec_infras_cost_rvalue_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "elec_infras_cost_rvalue", &result))
		make_access_error("SAM_MhkCosts", "elec_infras_cost_rvalue");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_elec_infras_cost_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "elec_infras_cost_total", &result))
		make_access_error("SAM_MhkCosts", "elec_infras_cost_total");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_eng_and_mgmt_cost_input_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "eng_and_mgmt_cost_input", &result))
		make_access_error("SAM_MhkCosts", "eng_and_mgmt_cost_input");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_eng_and_mgmt_cost_method_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "eng_and_mgmt_cost_method", &result))
		make_access_error("SAM_MhkCosts", "eng_and_mgmt_cost_method");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_eng_and_mgmt_cost_rvalue_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "eng_and_mgmt_cost_rvalue", &result))
		make_access_error("SAM_MhkCosts", "eng_and_mgmt_cost_rvalue");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_eng_and_mgmt_cost_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "eng_and_mgmt_cost_total", &result))
		make_access_error("SAM_MhkCosts", "eng_and_mgmt_cost_total");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_export_cable_length_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "export_cable_length", &result))
		make_access_error("SAM_MhkCosts", "export_cable_length");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_insurance_during_construction_cost_input_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "insurance_during_construction_cost_input", &result))
		make_access_error("SAM_MhkCosts", "insurance_during_construction_cost_input");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_insurance_during_construction_cost_method_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "insurance_during_construction_cost_method", &result))
		make_access_error("SAM_MhkCosts", "insurance_during_construction_cost_method");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_insurance_during_construction_cost_rvalue_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "insurance_during_construction_cost_rvalue", &result))
		make_access_error("SAM_MhkCosts", "insurance_during_construction_cost_rvalue");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_inter_array_cable_length_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inter_array_cable_length", &result))
		make_access_error("SAM_MhkCosts", "inter_array_cable_length");
	});
	return result;
}

SAM_EXPORT const char* SAM_MhkCosts_MHKCosts_lib_tidal_device_sget(SAM_table ptr, SAM_error *err){
	const char* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_string(ptr, "lib_tidal_device");
	if (!result)
		make_access_error("SAM_MhkCosts", "lib_tidal_device");
	});
	return result;
}

SAM_EXPORT const char* SAM_MhkCosts_MHKCosts_lib_wave_device_sget(SAM_table ptr, SAM_error *err){
	const char* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_string(ptr, "lib_wave_device");
	if (!result)
		make_access_error("SAM_MhkCosts", "lib_wave_device");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_library_or_input_wec_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "library_or_input_wec", &result))
		make_access_error("SAM_MhkCosts", "library_or_input_wec");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_maintenance_cost_input_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "maintenance_cost_input", &result))
		make_access_error("SAM_MhkCosts", "maintenance_cost_input");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_maintenance_cost_method_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "maintenance_cost_method", &result))
		make_access_error("SAM_MhkCosts", "maintenance_cost_method");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_maintenance_cost_rvalue_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "maintenance_cost_rvalue", &result))
		make_access_error("SAM_MhkCosts", "maintenance_cost_rvalue");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_maintenance_cost_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "maintenance_cost_total", &result))
		make_access_error("SAM_MhkCosts", "maintenance_cost_total");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_marine_energy_tech_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "marine_energy_tech", &result))
		make_access_error("SAM_MhkCosts", "marine_energy_tech");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_mooring_found_substruc_cost_input_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mooring_found_substruc_cost_input", &result))
		make_access_error("SAM_MhkCosts", "mooring_found_substruc_cost_input");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_mooring_found_substruc_cost_method_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mooring_found_substruc_cost_method", &result))
		make_access_error("SAM_MhkCosts", "mooring_found_substruc_cost_method");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_mooring_found_substruc_cost_rvalue_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mooring_found_substruc_cost_rvalue", &result))
		make_access_error("SAM_MhkCosts", "mooring_found_substruc_cost_rvalue");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_mooring_found_substruc_cost_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mooring_found_substruc_cost_total", &result))
		make_access_error("SAM_MhkCosts", "mooring_found_substruc_cost_total");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_operations_cost_input_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "operations_cost_input", &result))
		make_access_error("SAM_MhkCosts", "operations_cost_input");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_operations_cost_method_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "operations_cost_method", &result))
		make_access_error("SAM_MhkCosts", "operations_cost_method");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_operations_cost_rvalue_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "operations_cost_rvalue", &result))
		make_access_error("SAM_MhkCosts", "operations_cost_rvalue");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_operations_cost_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "operations_cost_total", &result))
		make_access_error("SAM_MhkCosts", "operations_cost_total");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_other_financial_cost_input_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "other_financial_cost_input", &result))
		make_access_error("SAM_MhkCosts", "other_financial_cost_input");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_other_financial_cost_method_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "other_financial_cost_method", &result))
		make_access_error("SAM_MhkCosts", "other_financial_cost_method");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_other_financial_cost_rvalue_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "other_financial_cost_rvalue", &result))
		make_access_error("SAM_MhkCosts", "other_financial_cost_rvalue");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_other_infrastructure_cost_input_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "other_infrastructure_cost_input", &result))
		make_access_error("SAM_MhkCosts", "other_infrastructure_cost_input");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_other_infrastructure_cost_method_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "other_infrastructure_cost_method", &result))
		make_access_error("SAM_MhkCosts", "other_infrastructure_cost_method");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_other_infrastructure_cost_rvalue_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "other_infrastructure_cost_rvalue", &result))
		make_access_error("SAM_MhkCosts", "other_infrastructure_cost_rvalue");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_other_infrastructure_cost_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "other_infrastructure_cost_total", &result))
		make_access_error("SAM_MhkCosts", "other_infrastructure_cost_total");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_plant_commissioning_cost_input_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "plant_commissioning_cost_input", &result))
		make_access_error("SAM_MhkCosts", "plant_commissioning_cost_input");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_plant_commissioning_cost_method_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "plant_commissioning_cost_method", &result))
		make_access_error("SAM_MhkCosts", "plant_commissioning_cost_method");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_plant_commissioning_cost_rvalue_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "plant_commissioning_cost_rvalue", &result))
		make_access_error("SAM_MhkCosts", "plant_commissioning_cost_rvalue");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_power_takeoff_system_cost_input_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "power_takeoff_system_cost_input", &result))
		make_access_error("SAM_MhkCosts", "power_takeoff_system_cost_input");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_power_takeoff_system_cost_method_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "power_takeoff_system_cost_method", &result))
		make_access_error("SAM_MhkCosts", "power_takeoff_system_cost_method");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_power_takeoff_system_cost_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "power_takeoff_system_cost_total", &result))
		make_access_error("SAM_MhkCosts", "power_takeoff_system_cost_total");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_project_contingency_cost_input_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "project_contingency_cost_input", &result))
		make_access_error("SAM_MhkCosts", "project_contingency_cost_input");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_project_contingency_cost_method_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "project_contingency_cost_method", &result))
		make_access_error("SAM_MhkCosts", "project_contingency_cost_method");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_project_contingency_cost_rvalue_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "project_contingency_cost_rvalue", &result))
		make_access_error("SAM_MhkCosts", "project_contingency_cost_rvalue");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_reserve_accounts_cost_input_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "reserve_accounts_cost_input", &result))
		make_access_error("SAM_MhkCosts", "reserve_accounts_cost_input");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_reserve_accounts_cost_method_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "reserve_accounts_cost_method", &result))
		make_access_error("SAM_MhkCosts", "reserve_accounts_cost_method");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_reserve_accounts_cost_rvalue_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "reserve_accounts_cost_rvalue", &result))
		make_access_error("SAM_MhkCosts", "reserve_accounts_cost_rvalue");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_reserve_accounts_cost_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "reserve_accounts_cost_total", &result))
		make_access_error("SAM_MhkCosts", "reserve_accounts_cost_total");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_riser_cable_length_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "riser_cable_length", &result))
		make_access_error("SAM_MhkCosts", "riser_cable_length");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_site_access_port_staging_cost_input_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "site_access_port_staging_cost_input", &result))
		make_access_error("SAM_MhkCosts", "site_access_port_staging_cost_input");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_site_access_port_staging_cost_method_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "site_access_port_staging_cost_method", &result))
		make_access_error("SAM_MhkCosts", "site_access_port_staging_cost_method");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_site_access_port_staging_cost_rvalue_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "site_access_port_staging_cost_rvalue", &result))
		make_access_error("SAM_MhkCosts", "site_access_port_staging_cost_rvalue");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_site_access_port_staging_cost_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "site_access_port_staging_cost_total", &result))
		make_access_error("SAM_MhkCosts", "site_access_port_staging_cost_total");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_structural_assembly_cost_input_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "structural_assembly_cost_input", &result))
		make_access_error("SAM_MhkCosts", "structural_assembly_cost_input");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_structural_assembly_cost_method_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "structural_assembly_cost_method", &result))
		make_access_error("SAM_MhkCosts", "structural_assembly_cost_method");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_structural_assembly_cost_rvalue_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "structural_assembly_cost_rvalue", &result))
		make_access_error("SAM_MhkCosts", "structural_assembly_cost_rvalue");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_structural_assembly_cost_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "structural_assembly_cost_total", &result))
		make_access_error("SAM_MhkCosts", "structural_assembly_cost_total");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_MHKCosts_system_capacity_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "system_capacity", &result))
		make_access_error("SAM_MhkCosts", "system_capacity");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_Outputs_assembly_and_install_cost_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "assembly_and_install_cost", &result))
		make_access_error("SAM_MhkCosts", "assembly_and_install_cost");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_Outputs_assembly_and_install_cost_modeled_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "assembly_and_install_cost_modeled", &result))
		make_access_error("SAM_MhkCosts", "assembly_and_install_cost_modeled");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_Outputs_development_cost_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "development_cost", &result))
		make_access_error("SAM_MhkCosts", "development_cost");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_Outputs_development_cost_modeled_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "development_cost_modeled", &result))
		make_access_error("SAM_MhkCosts", "development_cost_modeled");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_Outputs_eng_and_mgmt_cost_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "eng_and_mgmt_cost", &result))
		make_access_error("SAM_MhkCosts", "eng_and_mgmt_cost");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_Outputs_eng_and_mgmt_cost_modeled_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "eng_and_mgmt_cost_modeled", &result))
		make_access_error("SAM_MhkCosts", "eng_and_mgmt_cost_modeled");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_Outputs_insurance_during_construction_cost_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "insurance_during_construction_cost", &result))
		make_access_error("SAM_MhkCosts", "insurance_during_construction_cost");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_Outputs_insurance_during_construction_cost_modeled_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "insurance_during_construction_cost_modeled", &result))
		make_access_error("SAM_MhkCosts", "insurance_during_construction_cost_modeled");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_Outputs_maintenance_cost_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "maintenance_cost", &result))
		make_access_error("SAM_MhkCosts", "maintenance_cost");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_Outputs_maintenance_cost_modeled_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "maintenance_cost_modeled", &result))
		make_access_error("SAM_MhkCosts", "maintenance_cost_modeled");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_Outputs_mooring_found_substruc_cost_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mooring_found_substruc_cost", &result))
		make_access_error("SAM_MhkCosts", "mooring_found_substruc_cost");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_Outputs_mooring_found_substruc_cost_modeled_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "mooring_found_substruc_cost_modeled", &result))
		make_access_error("SAM_MhkCosts", "mooring_found_substruc_cost_modeled");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_Outputs_operations_cost_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "operations_cost", &result))
		make_access_error("SAM_MhkCosts", "operations_cost");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_Outputs_operations_cost_modeled_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "operations_cost_modeled", &result))
		make_access_error("SAM_MhkCosts", "operations_cost_modeled");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_Outputs_other_financial_cost_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "other_financial_cost", &result))
		make_access_error("SAM_MhkCosts", "other_financial_cost");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_Outputs_other_financial_cost_modeled_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "other_financial_cost_modeled", &result))
		make_access_error("SAM_MhkCosts", "other_financial_cost_modeled");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_Outputs_other_infrastructure_cost_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "other_infrastructure_cost", &result))
		make_access_error("SAM_MhkCosts", "other_infrastructure_cost");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_Outputs_other_infrastructure_cost_modeled_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "other_infrastructure_cost_modeled", &result))
		make_access_error("SAM_MhkCosts", "other_infrastructure_cost_modeled");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_Outputs_plant_commissioning_cost_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "plant_commissioning_cost", &result))
		make_access_error("SAM_MhkCosts", "plant_commissioning_cost");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_Outputs_plant_commissioning_cost_modeled_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "plant_commissioning_cost_modeled", &result))
		make_access_error("SAM_MhkCosts", "plant_commissioning_cost_modeled");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_Outputs_power_takeoff_system_cost_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "power_takeoff_system_cost", &result))
		make_access_error("SAM_MhkCosts", "power_takeoff_system_cost");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_Outputs_power_takeoff_system_cost_modeled_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "power_takeoff_system_cost_modeled", &result))
		make_access_error("SAM_MhkCosts", "power_takeoff_system_cost_modeled");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_Outputs_project_contingency_cost_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "project_contingency_cost", &result))
		make_access_error("SAM_MhkCosts", "project_contingency_cost");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_Outputs_project_contingency_cost_modeled_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "project_contingency_cost_modeled", &result))
		make_access_error("SAM_MhkCosts", "project_contingency_cost_modeled");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_Outputs_reserve_accounts_cost_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "reserve_accounts_cost", &result))
		make_access_error("SAM_MhkCosts", "reserve_accounts_cost");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_Outputs_reserve_accounts_cost_modeled_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "reserve_accounts_cost_modeled", &result))
		make_access_error("SAM_MhkCosts", "reserve_accounts_cost_modeled");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_Outputs_site_access_port_staging_cost_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "site_access_port_staging_cost", &result))
		make_access_error("SAM_MhkCosts", "site_access_port_staging_cost");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_Outputs_site_access_port_staging_cost_modeled_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "site_access_port_staging_cost_modeled", &result))
		make_access_error("SAM_MhkCosts", "site_access_port_staging_cost_modeled");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_Outputs_structural_assembly_cost_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "structural_assembly_cost", &result))
		make_access_error("SAM_MhkCosts", "structural_assembly_cost");
	});
	return result;
}

SAM_EXPORT double SAM_MhkCosts_Outputs_structural_assembly_cost_modeled_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "structural_assembly_cost_modeled", &result))
		make_access_error("SAM_MhkCosts", "structural_assembly_cost_modeled");
	});
	return result;
}

