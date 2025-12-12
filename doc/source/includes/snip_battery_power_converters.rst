
For photovoltaic-battery systems, SAM can model a battery that is connected to either the DC or AC side of the photovoltaic inverter.


 
.. note:: The DC connected option is only available with the PV Battery configuration. The Standalone and Custom Generation Profile - Battery configurations assume that the battery is the only DC component in the system.


.. note:: The Power Converters conversion efficiency inputs account for electrical losses associated with any battery power converter equipment except for the photovoltaic inverter. SAM models each battery converter as a fixed conversion efficiency.


.. note:: The photovoltaic inverter is a separate component from the battery power converters specified here and uses a more sophisticated model with an efficiency curve that varies with the inverter load. You specify the photovoltaic inverter model and parameters on the :doc:`Inverter <../detailed-photovoltaic-model/pv_inverter>` page. SAM models the inverter as a hybrid inverter with inputs for both a photovoltaic array and battery, regardless of whether the inverter you choose is actually a hybrid inverter. You can use the cec_hybrid column in the inverter library to find inverters that are specified as hybrid inverters.

DC Connected (PV Battery Only)
..............................

  Choose **DC Connected** for a battery connected to the DC side of a hybrid photovoltaic inverter as shown in the diagram above.

  To account for electrical losses from a DC-DC converter between the photovoltaic array and inverter, be sure to assign an appropriate value to the **DC power optimizer loss** on the :doc:`Losses <../detailed-photovoltaic-model/pv_losses>`   page.

  For a DC-connected battery, during time steps when the total power from the photovoltaic array and battery is greater than the inverter's nameplate capacity, the inverter limits its output power to the nameplate capacity. For the dispatch options with **Battery can charge from clipped system power** enabled on the Battery Dispatch page, if the battery is not fully charged and is not discharging, the array power in excess of the inverter's nominal capacity charges the battery.

**DC to DC conversion efficiency, %**
  For the DC-connected option, the electrical conversion efficiency of the battery management system (BMS). SAM applies this loss to power into or out of the battery to account for power consumed by the BMS. SAM disables this input for the AC Connected option.

**Inverter efficiency cutoff, %**
  For the DC-connected option, the inverter efficiency cutoff is the photovoltaic inverter operating efficiency threshold below which the battery is not allowed to charge from the grid, or to discharge when the discharge power is greater than the inverter's maximum rated power. SAM reports the inverter operating efficiency in the time series results.

AC Connected
............

  Choose **AC Connected** for a battery connected to the grid interconnection point as shown in the diagram above. Power conversion equipment is required to convert DC power from the battery to AC power before it can serve the load or be sent to the grid, and to convert AC power from the grid or pvhotovoltaic inverter before it can charge the battery.

**AC to DC conversion efficiency, %**
  For the AC-connected option, the electrical conversion efficiency associated with the equipment that converts AC power from either the photovoltaic inverter output or grid to DC power for the battery. SAM disables this input for the DC Connected option.

**DC to AC conversion efficiency, %**
  For the AC-connected option, the electrical conversion efficiency associated with the equipment that converts DC power from the battery to AC power for either the AC load or grid, or both. SAM disables this input for the DC Connected option.