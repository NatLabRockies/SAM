System Design
=============

.. include:: ../includes/snip_pvwatts_system_design.rst

Battery Bank
~~~~~~~~~~~~
When you :doc:`choose <../getting-started/choose_models>` the PV-Watts Battery model, you can model a behind-the-meter AC-coupled battery bank designed reduce a residential or commercial building's electricity bill by minimizing grid power consumption.

.. note:: To model a battery bank for a photovoltaic system with one of the PPA financial models, or for battery model with more features, use the :doc:`detailed PV-battery model <../battery-storage/battery_storage>`. The PVWatts-battery model is a simplified version of the detailed model.

**Battery capacity, kWh**
  The size of the battery bank in kilowatt-hours.

**Battery power, kW**
  The battery bank's maximum power output in kilowatts.

**Battery chemistry**
  The type of battery. The PVWatts battery model can model lead acid (VRLA) and Lithium-ion (NMC) batteries. For more battery chemistry options, use the :doc:`detailed photovoltaic model <../detailed-photovoltaic-model/pv_overview>`   instead of the PVWatts model.

**Battery dispatch**
*   Choose **Peak Shaving (look ahead)** to discharge the battery each day based on the next day's hour of peak grid consumption, determined from next day's load and generation profile.

*   Choose **Peak Shaving (look behind)** to dispatch the battery each day based on the previous day's hour of peak grid consumption.

*   Choose **Custom Dispatch** to input a time series array indicating how to charge or discharge the battery. See below for details

Custom Dispatch
...............

When you choose **Custom Dispatch**, click **Edit data** to open the :doc:`Edit Array <../window-reference/win_edit_array>` window and specify a charge or discharge power value for each simulation time step: To discharge in a given time step, use a positive value in kW; to charge in a given time step, usea negative kW value.

Optimal Sizing and Dispatch from REopt
......................................

.. include:: ../includes/snip_battery_reopt.rst

