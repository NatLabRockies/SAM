#ifndef SAM_CSPHEATSINK_H_
#define SAM_CSPHEATSINK_H_

#include "visibility.h"
#include "SAM_api.h"


#include <stdint.h>
#ifdef __cplusplus
extern "C"
{
#endif

	//
	// CspHeatsink Technology Model
	//

	/** 
	 * Create a CspHeatsink variable table.
	 * @param def: the set of financial model-dependent defaults to use (None, Residential, ...)
	 * @param[in,out] err: a pointer to an error object
	 */

	SAM_EXPORT typedef void * SAM_CspHeatsink;

	/// verbosity level 0 or 1. Returns 1 on success
	SAM_EXPORT int SAM_CspHeatsink_execute(SAM_table data, int verbosity, SAM_error* err);


	//
	// System parameters
	//

	/**
	 * Set t_step: Timestep duration [s]
	 * options: None
	 * constraints: None
	 * required if: None
	 */
	SAM_EXPORT void SAM_CspHeatsink_System_t_step_nset(SAM_table ptr, double number, SAM_error *err);


	/**
	 * System Getters
	 */

	SAM_EXPORT double SAM_CspHeatsink_System_t_step_nget(SAM_table ptr, SAM_error *err);


	/**
	 * Outputs Getters
	 */

#ifdef __cplusplus
} /* end of extern "C" { */
#endif

#endif