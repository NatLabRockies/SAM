#ifndef SAM_MHKCOSTS_H_
#define SAM_MHKCOSTS_H_

#include "visibility.h"
#include "SAM_api.h"


#include <stdint.h>
#ifdef __cplusplus
extern "C"
{
#endif

	//
	// MhkCosts Technology Model
	//

	/** 
	 * Create a MhkCosts variable table.
	 * @param def: the set of financial model-dependent defaults to use (None, Residential, ...)
	 * @param[in,out] err: a pointer to an error object
	 */

	SAM_EXPORT typedef void * SAM_MhkCosts;

	/// verbosity level 0 or 1. Returns 1 on success
	SAM_EXPORT int SAM_MhkCosts_execute(SAM_table data, int verbosity, SAM_error* err);


	//
	// MHKCosts parameters
	//

	/**
	 * Set assembly_and_install_cost_input: Assembly and installation cost [$]
	 * options: None
	 * constraints: None
	 * required if: assembly_and_install_cost_method<2
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_assembly_and_install_cost_input_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set assembly_and_install_cost_method: Assembly and installation cost method [0/1/2]
	 * options: 0=Enter in $/kW,1=Enter in $,2=Use modeled value
	 * constraints: MIN=0,MAX=4
	 * required if: *
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_assembly_and_install_cost_method_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set assembly_and_install_cost_rvalue: Assembly and installation R-value
	 * options: None
	 * constraints: MIN=0,MAX=1
	 * required if: assembly_and_install_cost_method=4
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_assembly_and_install_cost_rvalue_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set assembly_and_install_cost_total: Assembly and installation itemized cost total [$]
	 * options: None
	 * constraints: None
	 * required if: assembly_and_install_cost_method=3
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_assembly_and_install_cost_total_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set development_cost_input: Development cost [$]
	 * options: None
	 * constraints: None
	 * required if: development_cost_method<2
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_development_cost_input_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set development_cost_method: Development cost method [0/1/2]
	 * options: 0=Enter in $/kW,1=Enter in $,2=Use modeled value,3=Enter in itemized costs
	 * constraints: MIN=0,MAX=4
	 * required if: *
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_development_cost_method_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set development_cost_rvalue: Development R-value
	 * options: None
	 * constraints: MIN=0,MAX=1
	 * required if: development_cost_method=4
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_development_cost_rvalue_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set development_cost_total: Development itemized cost total [$]
	 * options: None
	 * constraints: None
	 * required if: development_cost_method=3
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_development_cost_total_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set device_rated_power: Rated capacity of device [kW]
	 * options: None
	 * constraints: MIN=0
	 * required if: *
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_device_rated_power_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set devices_per_row: Number of wave devices per row in array
	 * options: None
	 * constraints: INTEGER
	 * required if: *
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_devices_per_row_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set elec_infras_cost_input: Electrical infrastructure cost [$]
	 * options: None
	 * constraints: None
	 * required if: elec_infras_cost_method<2
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_elec_infras_cost_input_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set elec_infras_cost_method: Electrical infrastructure cost method [0/1/2]
	 * options: 0=Enter in $/kW,1=Enter in $,2=Use modeled value
	 * constraints: MIN=0,MAX=4
	 * required if: *
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_elec_infras_cost_method_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set elec_infras_cost_modeled: Electrical infrastructure cost modeled [$]
	 * options: None
	 * constraints: None
	 * required if: elec_infras_cost_method=2
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_elec_infras_cost_modeled_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set elec_infras_cost_rvalue: Electrical infrastructure R-value
	 * options: None
	 * constraints: MIN=0,MAX=1
	 * required if: elec_infras_cost_method=4
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_elec_infras_cost_rvalue_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set elec_infras_cost_total: Electrical infrastructure itemized cost total [$]
	 * options: None
	 * constraints: None
	 * required if: elec_infras_cost_method=3
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_elec_infras_cost_total_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set eng_and_mgmt_cost_input: Engineering and management cost [$]
	 * options: None
	 * constraints: None
	 * required if: eng_and_mgmt_cost_method<2
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_eng_and_mgmt_cost_input_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set eng_and_mgmt_cost_method: Engineering and management cost method [0/1/2]
	 * options: 0=Enter in $/kW,1=Enter in $,2=Use modeled value,3=Enter in itemized costs
	 * constraints: MIN=0,MAX=4
	 * required if: *
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_eng_and_mgmt_cost_method_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set eng_and_mgmt_cost_rvalue: Engineering and management R-value
	 * options: None
	 * constraints: MIN=0,MAX=1
	 * required if: eng_and_mgmt_cost_method=4
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_eng_and_mgmt_cost_rvalue_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set eng_and_mgmt_cost_total: Engineering and management itemized cost total [$]
	 * options: None
	 * constraints: None
	 * required if: eng_and_mgmt_cost_method=3
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_eng_and_mgmt_cost_total_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set export_cable_length: Export cable length [m]
	 * options: None
	 * constraints: MIN=0
	 * required if: *
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_export_cable_length_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set insurance_during_construction_cost_input: Insurance during construction cost [$]
	 * options: None
	 * constraints: None
	 * required if: insurance_during_construction_cost_method<2
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_insurance_during_construction_cost_input_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set insurance_during_construction_cost_method: Insurance during construction cost method [0/1/2]
	 * options: 0=Enter in $/kW,1=Enter in $,2=Use modeled value
	 * constraints: MIN=0,MAX=4
	 * required if: *
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_insurance_during_construction_cost_method_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set insurance_during_construction_cost_rvalue: Insurance during construction R-value
	 * options: None
	 * constraints: MIN=0,MAX=1
	 * required if: insurance_during_construction_cost_method=3
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_insurance_during_construction_cost_rvalue_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set inter_array_cable_length: Inter-array cable length [m]
	 * options: None
	 * constraints: MIN=0
	 * required if: *
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_inter_array_cable_length_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set lib_tidal_device: Tidal library name
	 * options: None
	 * constraints: None
	 * required if: marine_energy_tech=1
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_lib_tidal_device_sset(SAM_table ptr, const char* str, SAM_error *err);

	/**
	 * Set lib_wave_device: Wave library name
	 * options: None
	 * constraints: None
	 * required if: marine_energy_tech=0
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_lib_wave_device_sset(SAM_table ptr, const char* str, SAM_error *err);

	/**
	 * Set library_or_input_wec: Wave library or user input
	 * options: 0=Library,1=User
	 * constraints: None
	 * required if: marine_energy_tech=0
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_library_or_input_wec_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set maintenance_cost_input: Maintenance cost [$]
	 * options: None
	 * constraints: None
	 * required if: maintenance_cost_method<2
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_maintenance_cost_input_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set maintenance_cost_method: Maintenance cost method [0/1/2]
	 * options: 0=Enter in $/kW,1=Enter in $,2=Use modeled value
	 * constraints: MIN=0,MAX=4
	 * required if: *
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_maintenance_cost_method_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set maintenance_cost_rvalue: Maintenance R-value
	 * options: None
	 * constraints: MIN=0,MAX=1
	 * required if: maintenance_cost_method=4
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_maintenance_cost_rvalue_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set maintenance_cost_total: Maintenance itemized cost total [$]
	 * options: None
	 * constraints: None
	 * required if: maintenance_cost_method=3
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_maintenance_cost_total_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set marine_energy_tech: Marine energy technology [0/1]
	 * options: 0=Wave,1=Tidal
	 * constraints: MIN=0,MAX=1
	 * required if: *
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_marine_energy_tech_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set mooring_found_substruc_cost_input: Mooring, foundation, and substructure cost [$]
	 * options: None
	 * constraints: None
	 * required if: mooring_found_substruc_cost_method<2
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_mooring_found_substruc_cost_input_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set mooring_found_substruc_cost_method: Mooring, foundation, and substructure cost method [0/1/2]
	 * options: 0=Enter in $/kW,1=Enter in $,2=Use modeled value,3=Use itemized costs in $
	 * constraints: MIN=0,MAX=4
	 * required if: *
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_mooring_found_substruc_cost_method_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set mooring_found_substruc_cost_rvalue: Mooring, foundation, and substructure R-value
	 * options: None
	 * constraints: MIN=0,MAX=1
	 * required if: mooring_found_substruc_cost_method=4
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_mooring_found_substruc_cost_rvalue_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set mooring_found_substruc_cost_total: Mooring, foundation, and substructure itemized cost total [$]
	 * options: None
	 * constraints: None
	 * required if: mooring_found_substruc_cost_method=3
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_mooring_found_substruc_cost_total_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set operations_cost_input: Operations cost [$]
	 * options: None
	 * constraints: None
	 * required if: operations_cost_method<2
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_operations_cost_input_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set operations_cost_method: Operations cost method [0/1/2]
	 * options: 0=Enter in $/kW,1=Enter in $,2=Use modeled value
	 * constraints: MIN=0,MAX=4
	 * required if: *
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_operations_cost_method_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set operations_cost_rvalue: Operations R-value
	 * options: None
	 * constraints: MIN=0,MAX=1
	 * required if: operations_cost_method=4
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_operations_cost_rvalue_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set operations_cost_total: Operations itemized cost total [$]
	 * options: None
	 * constraints: None
	 * required if: operations_cost_method=3
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_operations_cost_total_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set other_financial_cost_input: Other financial cost [$,$/kW]
	 * options: None
	 * constraints: None
	 * required if: other_financial_cost_method<2
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_other_financial_cost_input_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set other_financial_cost_method: Other financial cost method [0/1/2]
	 * options: 0=Enter in $/kW,1=Enter in $,2=Use modeled value
	 * constraints: MIN=0,MAX=4
	 * required if: *
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_other_financial_cost_method_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set other_financial_cost_rvalue: Other financial R-value
	 * options: None
	 * constraints: MIN=0,MAX=1
	 * required if: other_financial_cost_method=3
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_other_financial_cost_rvalue_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set other_infrastructure_cost_input: Other infrastructure cost [$]
	 * options: None
	 * constraints: None
	 * required if: other_infrastructure_cost_method<2
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_other_infrastructure_cost_input_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set other_infrastructure_cost_method: Other infrastructure cost method [0/1/2]
	 * options: 0=Enter in $/kW,1=Enter in $,2=Use modeled value
	 * constraints: MIN=0,MAX=4
	 * required if: *
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_other_infrastructure_cost_method_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set other_infrastructure_cost_rvalue: Other infrastructure R-value
	 * options: None
	 * constraints: MIN=0,MAX=1
	 * required if: other_infrastructure_cost_method=4
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_other_infrastructure_cost_rvalue_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set other_infrastructure_cost_total: Other infrastructure itemized cost total [$]
	 * options: None
	 * constraints: None
	 * required if: other_infrastructure_cost_method=3
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_other_infrastructure_cost_total_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set plant_commissioning_cost_input: Plant commissioning cost [$]
	 * options: None
	 * constraints: None
	 * required if: plant_commissioning_cost_method<2
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_plant_commissioning_cost_input_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set plant_commissioning_cost_method: Plant commissioning cost method [0/1/2]
	 * options: 0=Enter in $/kW,1=Enter in $,2=Use modeled value
	 * constraints: MIN=0,MAX=4
	 * required if: *
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_plant_commissioning_cost_method_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set plant_commissioning_cost_rvalue: Plant commissioning R-value
	 * options: None
	 * constraints: MIN=0,MAX=1
	 * required if: plant_commissioning_cost_method=4
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_plant_commissioning_cost_rvalue_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set power_takeoff_system_cost_input: Power take-off system cost [$]
	 * options: None
	 * constraints: None
	 * required if: power_takeoff_system_cost_method<2
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_power_takeoff_system_cost_input_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set power_takeoff_system_cost_method: Power take-off system cost method [0/1/2]
	 * options: 0=Enter in $/kW,1=Enter in $,2=Use modeled value,3=Use itemized costs in $
	 * constraints: MIN=0,MAX=4
	 * required if: *
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_power_takeoff_system_cost_method_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set power_takeoff_system_cost_total: Power take-off system cost itemized cost total [$]
	 * options: None
	 * constraints: None
	 * required if: power_takeoff_system_cost_method=3
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_power_takeoff_system_cost_total_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set project_contingency_cost_input: Project contingency cost [$]
	 * options: None
	 * constraints: None
	 * required if: project_contingency_cost_method<2
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_project_contingency_cost_input_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set project_contingency_cost_method: Project contingency cost method [0/1/2]
	 * options: 0=Enter in $/kW,1=Enter in $,2=Use modeled value
	 * constraints: MIN=0,MAX=4
	 * required if: *
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_project_contingency_cost_method_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set project_contingency_cost_rvalue: Project contingency R-value
	 * options: None
	 * constraints: MIN=0,MAX=1
	 * required if: project_contingency_cost_method=3
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_project_contingency_cost_rvalue_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set reserve_accounts_cost_input: Reserve accounts cost [$]
	 * options: None
	 * constraints: None
	 * required if: reserve_accounts_cost_method<2
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_reserve_accounts_cost_input_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set reserve_accounts_cost_method: Reserve accounts cost method [0/1/2]
	 * options: 0=Enter in $/kW,1=Enter in $,2=Use modeled value
	 * constraints: MIN=0,MAX=4
	 * required if: *
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_reserve_accounts_cost_method_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set reserve_accounts_cost_rvalue: Reserve accounts R-value
	 * options: None
	 * constraints: MIN=0,MAX=1
	 * required if: reserve_accounts_cost_method=4
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_reserve_accounts_cost_rvalue_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set reserve_accounts_cost_total: Reserve accounts itemized cost total [$]
	 * options: None
	 * constraints: None
	 * required if: reserve_accounts_cost_method=3
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_reserve_accounts_cost_total_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set riser_cable_length: Riser cable length [m]
	 * options: None
	 * constraints: MIN=0
	 * required if: *
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_riser_cable_length_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set site_access_port_staging_cost_input: Site access and port staging cost [$]
	 * options: None
	 * constraints: None
	 * required if: site_access_port_staging_cost_method<2
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_site_access_port_staging_cost_input_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set site_access_port_staging_cost_method: Site access and port staging cost method [0/1/2]
	 * options: 0=Enter in $/kW,1=Enter in $,2=Use modeled value
	 * constraints: MIN=0,MAX=4
	 * required if: *
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_site_access_port_staging_cost_method_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set site_access_port_staging_cost_rvalue: Site access and port staging R-value
	 * options: None
	 * constraints: MIN=0,MAX=1
	 * required if: site_access_port_staging_cost_method=4
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_site_access_port_staging_cost_rvalue_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set site_access_port_staging_cost_total: Site access and port staging itemized cost total [$]
	 * options: None
	 * constraints: None
	 * required if: site_access_port_staging_cost_method=3
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_site_access_port_staging_cost_total_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set structural_assembly_cost_input: Structural assembly cost [$]
	 * options: None
	 * constraints: None
	 * required if: structural_assembly_cost_method<2
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_structural_assembly_cost_input_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set structural_assembly_cost_method: Structural assembly cost method [0/1/2]
	 * options: 0=Enter in $/kW,1=Enter in $,2=Use modeled value,3=Use itemized costs in $
	 * constraints: MIN=0,MAX=4
	 * required if: *
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_structural_assembly_cost_method_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set structural_assembly_cost_rvalue: Structural assembly R-value
	 * options: None
	 * constraints: MIN=0,MAX=1
	 * required if: structural_assembly_cost_method=4
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_structural_assembly_cost_rvalue_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set structural_assembly_cost_total: Structural assembly itemized cost total [$]
	 * options: None
	 * constraints: None
	 * required if: structural_assembly_cost_method=3
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_structural_assembly_cost_total_nset(SAM_table ptr, double number, SAM_error *err);

	/**
	 * Set system_capacity: System Nameplate Capacity [kW]
	 * options: None
	 * constraints: MIN=0
	 * required if: *
	 */
	SAM_EXPORT void SAM_MhkCosts_MHKCosts_system_capacity_nset(SAM_table ptr, double number, SAM_error *err);


	/**
	 * MHKCosts Getters
	 */

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_assembly_and_install_cost_input_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_assembly_and_install_cost_method_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_assembly_and_install_cost_rvalue_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_assembly_and_install_cost_total_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_development_cost_input_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_development_cost_method_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_development_cost_rvalue_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_development_cost_total_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_device_rated_power_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_devices_per_row_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_elec_infras_cost_input_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_elec_infras_cost_method_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_elec_infras_cost_modeled_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_elec_infras_cost_rvalue_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_elec_infras_cost_total_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_eng_and_mgmt_cost_input_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_eng_and_mgmt_cost_method_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_eng_and_mgmt_cost_rvalue_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_eng_and_mgmt_cost_total_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_export_cable_length_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_insurance_during_construction_cost_input_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_insurance_during_construction_cost_method_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_insurance_during_construction_cost_rvalue_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_inter_array_cable_length_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT const char* SAM_MhkCosts_MHKCosts_lib_tidal_device_sget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT const char* SAM_MhkCosts_MHKCosts_lib_wave_device_sget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_library_or_input_wec_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_maintenance_cost_input_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_maintenance_cost_method_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_maintenance_cost_rvalue_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_maintenance_cost_total_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_marine_energy_tech_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_mooring_found_substruc_cost_input_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_mooring_found_substruc_cost_method_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_mooring_found_substruc_cost_rvalue_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_mooring_found_substruc_cost_total_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_operations_cost_input_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_operations_cost_method_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_operations_cost_rvalue_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_operations_cost_total_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_other_financial_cost_input_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_other_financial_cost_method_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_other_financial_cost_rvalue_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_other_infrastructure_cost_input_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_other_infrastructure_cost_method_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_other_infrastructure_cost_rvalue_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_other_infrastructure_cost_total_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_plant_commissioning_cost_input_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_plant_commissioning_cost_method_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_plant_commissioning_cost_rvalue_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_power_takeoff_system_cost_input_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_power_takeoff_system_cost_method_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_power_takeoff_system_cost_total_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_project_contingency_cost_input_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_project_contingency_cost_method_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_project_contingency_cost_rvalue_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_reserve_accounts_cost_input_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_reserve_accounts_cost_method_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_reserve_accounts_cost_rvalue_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_reserve_accounts_cost_total_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_riser_cable_length_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_site_access_port_staging_cost_input_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_site_access_port_staging_cost_method_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_site_access_port_staging_cost_rvalue_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_site_access_port_staging_cost_total_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_structural_assembly_cost_input_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_structural_assembly_cost_method_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_structural_assembly_cost_rvalue_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_structural_assembly_cost_total_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_MHKCosts_system_capacity_nget(SAM_table ptr, SAM_error *err);


	/**
	 * Outputs Getters
	 */

	SAM_EXPORT double SAM_MhkCosts_Outputs_assembly_and_install_cost_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_Outputs_assembly_and_install_cost_modeled_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_Outputs_development_cost_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_Outputs_development_cost_modeled_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_Outputs_eng_and_mgmt_cost_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_Outputs_eng_and_mgmt_cost_modeled_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_Outputs_insurance_during_construction_cost_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_Outputs_insurance_during_construction_cost_modeled_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_Outputs_maintenance_cost_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_Outputs_maintenance_cost_modeled_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_Outputs_mooring_found_substruc_cost_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_Outputs_mooring_found_substruc_cost_modeled_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_Outputs_operations_cost_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_Outputs_operations_cost_modeled_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_Outputs_other_financial_cost_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_Outputs_other_financial_cost_modeled_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_Outputs_other_infrastructure_cost_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_Outputs_other_infrastructure_cost_modeled_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_Outputs_plant_commissioning_cost_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_Outputs_plant_commissioning_cost_modeled_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_Outputs_power_takeoff_system_cost_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_Outputs_power_takeoff_system_cost_modeled_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_Outputs_project_contingency_cost_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_Outputs_project_contingency_cost_modeled_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_Outputs_reserve_accounts_cost_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_Outputs_reserve_accounts_cost_modeled_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_Outputs_site_access_port_staging_cost_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_Outputs_site_access_port_staging_cost_modeled_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_Outputs_structural_assembly_cost_nget(SAM_table ptr, SAM_error *err);

	SAM_EXPORT double SAM_MhkCosts_Outputs_structural_assembly_cost_modeled_nget(SAM_table ptr, SAM_error *err);

#ifdef __cplusplus
} /* end of extern "C" { */
#endif

#endif