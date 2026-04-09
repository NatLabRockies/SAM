
Some battery systems have losses that are not accounted for by the conversion losses specified under Power Converters above. You can use the ancillary equipment losses to account for these additional losses. By default, these losses are set to zero, which is appropriate for most analyses.

Ancillary Equipment Losses
..........................

These are losses to account for electrical losses or consumption by equipment in the battery system such as for heaters and pumps for temperature control equipment.

For DC-connected batteries, the losses are applied the system's DC power. For AC-connected systems, they are applied to the AC power.

Losses by operating mode
........................

Choose this option to specify losses by month that apply when the battery is charging, discharging, or idle.

**Charging mode losses**
  Losses that apply when the battery is charging.

  Click **Edit values** to specify the loss in kW by month. SAM applies the loss in each time step of the month. For example, if the expected loss in January is 500 W, enter 0.5 for January, and SAM will reduce the available power by 0.5 kW for each time step in January.

**Discharging mode losses**
  Losses that apply when the battery is discharging.

**Idle mode losses**
  Losses that apply when the battery is neither charging, nor discharging.

Time series losses
..................

Choose this option to specify hourly or subhourly time series losses.

**Time series losses**
  Click **Edit array** to enter or import kW loss values for each time step of the simulation.

Battery Availability
....................

Battery availability losses can represent battery downtime for maintenance, system outages, or other times when the battery can neither charge nor discharge. The battery availability loss has the effect of reducing electricity to/from battery and battery state of charge in the time steps with availability losses.

To explore the effect of battery availability losses, use the following output variables

* **Electricity to/from battery AC (kW)**

* **Battery state of charge (%)**

* **Battery availability loss (%)**

The **Electricity to [...] from battery (kW)** and **Electricity to battery from [...] (kW)** variables may also be useful.

Battery availability losses affect both power and capacity. For a time step with availability loss, the loss percentage for that time step applies to both the battery power (kW) and capacity (kWh). Because the availability loss is intended to represent downtime for maintenance, the loss percentage also applies to the battery state of charge, assuming that cells are discharged to safely perform maintenance. This means that the battery will have a lower state of charge at the end of the availability loss period than at the beginning.

.. note:: If the battery state of charge (SOC) is low when the availability loss period begins, the SOC could fall below the minimum SOC from the Battery Dispatch page. For example, a battery with a 10% minimum SOC that is at its minimum charge state when a period of 50% availability begins, would have a SOC of 5% at the end of the period.

**Edit losses**
  The :doc:`Edit Losses <../window-reference/win_edit_losses>`   window allows you to define loss factors as follows:

*   Constant loss is a single loss factor that applies to the system's entire output. You can use this to model an availability factor.

*   Time series  losses apply to specific time steps.

  SAM multiplies the battery power in each time step by the loss percentage that you specify for that time step. For a given time step, a loss of zero would result in no adjustment. A loss of 5% would reduce the power by 5%, and a loss of -5% would increase the power by 5%.