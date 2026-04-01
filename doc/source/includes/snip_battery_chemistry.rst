
The battery type defines the battery chemistry for (lithium ion, lead acid, or flow battery), and the type of battery for each chemistry. When you choose a battery type, SAM automatically changes the battery property input variables to default values for that type. These default values were drawn from DiOrio (2015) "Technoeconomic Modeling of Battery Energy Storage in SAM" available `here <https://sam.nrel.gov/battery-storage/battery-publications.html>`__, which also includes more details on how SAM calculates battery capacity.

**Battery type**
Choose the battery chemistry and battery type for the batteries in your system.

When you choose a battery type, SAM replaces the values of **Voltage Properties** and **Current and Capacity** input variables as appropriate with values for each battery type.

When you choose a custom battery type for either the lead acid or lithium ion chemistry, SAM does not replace the input variable values.

 
To model a battery type not included in the list, choose either **Lead Acid: Custom** or **Lithium Ion: Custom**, and specify your voltage, current, and capacity properties appropriate for the battery.
When you choose the custom lead acid battery type, SAM retains the capacity and discharge rate values from the table below from the previous state. For example, if you change the battery type from flooded lead acid to custom lead acid, SAM will apply the capacity/discharge rate table for flooded batteries to your custom battery.

Lead Acid
.........

The three lead acid battery types use the lead acid battery capacity model described in DiOrio (2015), cited above:

* Flooded lead acid batteries with a liquid electrolyte.

* Valve Regulated (VRLA) batteries are sealed, and the electrolyte is bound in a gel.

* VRLA Absorptive Glass Mat (AGM) batteries are sealed, and the electrolyte is immobilized in porous separators.

Lead acid battery capacity is dependent on the discharge rate. When you choose different lead-acid battery types from the list, SAM changes internal variable values that define the relationship between capacity and discharge rate as shown in the table below. It is not possible to change these values from the Battery Storage input page. These values are based on analysis of information for batteries from different manufacturers. SAM considers the 20-hour discharge rate to be the nominal capacity of a lead-acid battery and scales the capacity at faster discharge rates as a percent of the that 20-hour capacity.

.. list-table::
   :width: 100%
   :align: center
   :header-rows: 1

   * - Discharge Rate
     - Flooded Capacity %
     - VRLA Gel Capacity %
     - VRLA AGM Capacity %
   * - 20-hr ( 0.05 C )
     - 100
     - 100
     - 100
   * - 10-hr ( 0.1C )
     - 87
     - 84.9
     - 93.2
   * - 1-hr ( C )
     - 47
     - 63.1
     - 58.1

Lithium Ion
...........

The six lithium ion battery types use of the lithium-ion battery capacity model described in DiOrio (2015) "Technoeconomic Modeling of Battery Energy Storage in SAM" cited above:

* LMO: Lithium Manganese Oxide (|EQ_BATT_lmo|) – An inexpensive high-voltage cathode material with high power capabilities but potentially lower lifespan.

* LFP: Lithium Iron Phosphate (|EQ_BATT_lfp| – A lower voltage cathode material with excellent safety properties but lower volumetric energy.

* LCO: Lithium Cobalt Oxide (|EQ_BATT_lco| – Among the first and still a common cathode material with high specific energy, but potentially costly and toxic.

* LTO: Lithium Titanate (|EQ_BATT_lto| – A promising anode material with excellent lifetime properties but lower specific capacity and important cost considerations.

* NMC: Nickel Manganese Cobalt (|EQ_BATT_nmc| – A less expensive cathode material than LCO with potentially improved safety characteristics

* NCA: Nickel Cobalt Aluminum (|EQ_BATT_nca| – Similar in respects to NMC as a cathode material with high specific energy

When you choose a lithium ion battery, SAM assigns values to voltage, lifetime, and thermal properties as appropriate from Reddy (2011), available `here <https://sam.nrel.gov/battery-storage/battery-publications.html>`__, and from manufacturer data sheets. SAM does not change any internal variables or calculations.

Flow Batteries
..............

Flow battery designers can decouple power output (kW) from energy capacity (kWh) when sizing systems. Flow batteries may be able to cycle more deeply and operate for more total cycles than lithium ion or lead acid batteries, but flow batteries also have pumps, which should be considered when calculating **Ancillary Equipment Losses**.

**Vanadium Redox Flow**
  The vanadium redox flow battery model available in SAM comes from R. D’Agnostino et. al, (2014) "A Vanadium-Redox Flow-Battery Model for Evaluation of Distributed Storage Implementation in Residential Energy Systems"

*   VRFB: Vanadium Redox Flow (V  \ :sup:`2+`\ ,V  \ :sup:`3+`\    *anolyte*  ), (VO  \ :sup:`2+`\ , VO  \ :sup:`2+`\ , *catholyte*  ) 

**All Iron Redox Flow**
  The all iron redox flow battery model available in SAM shares the same input field framework as the vanadium flow battery, but relies on tabular voltage vs. depth-of-discharge in place of a voltage model. Default iron flow battery values are based on preliminary manufacturer data and feedback for an all-iron hybrid-redox flow battery.

*   AIFB: All Iron Redox Flow (Fe  \ :sup:`2+`\ , Fe  \ :sup:`3+`\   )



.. |EQ_BATT_lmo| image:: /images/EQ_BATT_lmo.png
.. |EQ_BATT_lfp| image:: /images/EQ_BATT_lfp.png
.. |EQ_BATT_nca| image:: /images/EQ_BATT_nca.png
.. |EQ_BATT_lto| image:: /images/EQ_BATT_lto.png
.. |EQ_BATT_nmc| image:: /images/EQ_BATT_nmc.png
.. |EQ_BATT_lco| image:: /images/EQ_BATT_lco.png
