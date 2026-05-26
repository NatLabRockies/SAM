
For photovoltaic behind-the-meter systems with battery storage, you can use Optimal Sizing and Dispatch from REopt to automatically size the battery bank and calculate an hour-by-hour dispatch schedule: SAM sends information from your SAM file to the online `REopt API <https://developer.nlr.gov/docs/energy-optimization/reopt/>`__, runs an optimization remotely, and replaces the SAM inputs for battery size and dispatch with data from the optimization.

.. note:: The dispatch schedule REopt calculates is based on a different representation of the photovoltaic-battery system and weather file than SAM uses for simulations.

This option has the following requirements:

* Battery bank sizing is in the Set Desired Bank Size mode.

* The performance model is either PV - Battery or PVWatts - Battery. Optimal sizing and dispatch is not available for the Custom Generation Profile - Battery, hybrid systems, or other models with storage.

* Hourly simulation time step, which is determined by the weather file time step. The sizing and dispatch does not work with subhourly simulations.

* For the Detailed PV model, the sizing and optimization does not work if more than one subarray is enabled.

For information about REopt, see:

* https://reopt.nlr.gov/tool


To optimize battery size and dispatch with REopt:

#. Choose a weather file and design the photovoltaic system.

#. On the Battery Cell and System page, choose **Set desired bank size**.

#. Choose the battery type and set values for the desired bank voltage, cell nominal voltage, and cell capacity, and any other battery parameters you want to change. Use default values if you do not have information about any of those inputs. Do not set values for **Desired bank power** and **Desired bank capacity**: These will be set automatically.

#. Check the inputs on the Battery Life page and change them as appropriate for your analysis.

#. Set inputs on the financial model input pages, including installation and operating costs, financial parameters, incentives, electric load, and electricity rates.

#. If your analysis includes grid outages, check **Consider grid outage in REopt optimization** if you want the REopt optimization to take into account the outage.

#. Click **Get size and dispatch** to make the call to the REopt API start the optimization process. This may take several minutes to complete. When the process finishes, SAM displays a message asking if you want to replace inputs for the battery size and dispatch.

 SAM sends the following information from your SAM file to the REopt API:

* Latitude and longitude from the Location and Resource page.

* Basic system design parameters from the System Design page for the photovoltaic system you are modeling, including the system capacity and an estimate of losses (for PVWatts, the **Total system losses percentage** input from the System Design page, or for the Detailed PV model, the **Total loss from nominal POA to net AC percentage** from the simulation results).

* Financial information from the Installation Costs, Operating Costs, Financial Parameters and Incentives pages.

* Electricity rate and load information from the Electric Load and Electricity Rates pages.

  If the REopt optimization is successful, SAM replaces the following input values on the Battery Cell and System page (System Design page for PVWatts) with data from REopt:

* **Desired bank capacity**

* **Desired bank power**

And, on the Battery Dispatch page (System Design page for PVWatts):

* Set the dispatch option to **Input battery power targets** (**Custom dispatch** for PVWatts).

* Populate **Time series battery power targets** (**Battery dispatch** for PVWatts) with optimized values.