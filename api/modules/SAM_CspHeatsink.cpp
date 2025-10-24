#include <string>
#include <utility>
#include <vector>
#include <memory>
#include <iostream>

#include <ssc/sscapi.h>

#include "SAM_api.h"
#include "ErrorHandler.h"
#include "SAM_CspHeatsink.h"

SAM_EXPORT int SAM_CspHeatsink_execute(SAM_table data, int verbosity, SAM_error* err){
	return SAM_module_exec("csp_heatsink", data, verbosity, err);
}

SAM_EXPORT void SAM_CspHeatsink_System_t_step_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "t_step", number);
	});
}

SAM_EXPORT double SAM_CspHeatsink_System_t_step_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "t_step", &result))
		make_access_error("SAM_CspHeatsink", "t_step");
	});
	return result;
}

