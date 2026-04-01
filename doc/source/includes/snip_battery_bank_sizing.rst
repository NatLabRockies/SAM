
The two battery bank sizing options allow you to either automatically size the battery bank based on desired size, or to manually specify the number of cells per string and strings in parallel.

The automatic option uses the basic equations described below to determine numbers of cells and strings or stacks, which may not always result in realistic values. If you use the automatic sizing option, be sure to check the **Computed Properties** values to be sure they are what you expect.

Set Desired Bank Size: Automatic Sizing
.......................................

For automatic sizing choose **Set desired bank size**.

**Desired bank power, kW**
  The battery's maximum discharge rate in kW. Compare this to **Maximum discharge power** under **Computed Properties** to verify that SAM calculated a discharge power close enough to the desired value to meet your requirements.

  The desired bank power can be in either DC kW or AC kW depending on whether you choose **DC units** or **AC units**. If you use AC units, SAM calculates the nominal bank power in DC kW using the appropriate conversion efficiency from the **Power Converters** section for either an AC- or DC-connected battery.

**Desired bank capacity, h or kWh**
  The nominal size of the battery bank. Choose h   to specify the size in hours of storage at the nominal discharge rate, or choose kWh   to specify the size in kWh of available energy. Compare this to **Nominal bank capacity** under **Computed Properties** to verify that SAM calculated a nominal value close enough to the desired value to meet your requirements.

.. note:: Some battery data sheets provide both a nominal battery capacity and an available or usable battery capacity that is less than the nominal capacity. Use the higher nominal capacity value for the desired bank size, and then use the inputs under **Charge Limits and Priority** on the Battery Dispatch page to limit the battery to the available capacity. This will ensure that SAM calculates costs in $/kWh based on the nominal capacity.

Specify Cells: Manual Sizing
............................

For manual sizing choose **Specify cells**.

**Number of cells in series**
  The number of cells in series in each string of the battery bank. The number of cells in series determines the maximum discharge power and the nominal bank voltage.

**Number of strings in parallel**
  The number of strings of cells in parallel in the battery bank. The number of strings in parallel determines the nominal bank capacity.

**Max C-rate of charge, per/hour**
  The maximum charge rate as a fraction of the battery bank capacity. For example, a 10 kWh battery with C-rate of charge of 0.5 can charge at a maximum rate 10 kWh × 0.5/h = 5 kW.

**Max C-rate of discharge, per/hour**
  The maximum discharge rate as a fraction of the battery bank capacity. For example, a 10 kWh battery with C-rate of discharge of 0.5 can discharge at a maximum rate 10 kWh × 0.5/h = 5 kW.

.. note:: For flow batteries, the capacity and power are decoupled so the the C-rate is a calculated value rather than an input.

Calculations for Automatic Bank Sizing
......................................

SAM's bank sizing calculations use basic equations using the cell property information you specify. The calculated values are designed to help you get started with your system design. They do not account for many real-life design factors. You should use these values for an initial preliminary analysis and then use **Specify cells** for conventional batteries or **Specify capacity and stack configuration** for flow batteries to refine your analysis.

**Number of cells in series, Number of cells per stack**
  SAM calculates a number of cells in series for a conventional battery, or cells per stack for a flow battery assuming one stack, that either meets exactly or slightly exceeds the desired bank voltage based on the cell nominal voltage. For example, for a desired bank voltage of 24 V with a nominal cell voltage of 3.6 V, SAM calculates *24 V ÷ 3.6 V/cell = 6.7*, or 7 cells in series. The actual nominal bank voltage is *3.6 V/cell × 7 cells = 25.2*   V. SAM displays the actual battery bank properties as calculated values under Current and Capacity.

**Number Strings in parallel (Lithium-ion and Lead-acid Batteries)**
  SAM calculates the bank capacity by determining the number of strings of cells in parallel required to ensure that the actual capacity is as close as possible to the desired value given the cell capacity that you specify under **Current and Capacity**. For the example above, if the desired bank capacity is 3 kWh, and the cell capacity is 1.5 Ah, the calculated bank voltage would be 25.2 V, and one string of cells has a capacity of *25.2 V × 1.5 Ah = 37.8 Wh*, or 0.0378 kWh. To reach the desired bank capacity of 3 kWh: *3 kWh ÷ 0.0378 kWh/string = 79.4*, or 80 strings.

  The calculated C-rates of charge and discharge are the desired bank power divided by the computed bank capacity.

**Capacity and Stack Configuration (Flow Batteries)**
  For flow batteries, the capacity is independent of the power block and can be specified exactly by the amount of electrolyte in the tanks. SAM sets nominal bank capacity to the desired capacity you specify. SAM calculates the nominal power ratings using the desired stack (bank) voltage and other properties in the **Current and Capacity** group. The number of stacks in parallel is depends on whether the cells are power limited or current limited.

  For the **Power limited** option, the number of stacks in parallel is the ceiling of the desired bank power divided by the product of **Cell max power discharge** and the number of cells in the stack (assuming one stack in series). For example, consider  a flow battery with a desired bank capacity of 100 kWh, bank power of 50 kW, and bank voltage of 48V with 1.4V cells and a cell power discharge max of 2W. The number of cells in the stack is *ceiling(48V ÷ 1.4V/cell) = ceiling(34.2 cells) = 35 cells*  . The bank voltage is *35 cells × 1.4V/cell = 49V*  . To achieve 50KW with limitations of 2W/cell, there must be *ceiling(50 kW / (0.002 kW/cell * 35 cells)) = 715 stacks in parallel*  .  

  For the **Current limited** option, the number of stacks in parallel is the ceiling of the desired bank power divided by the product of the battery bank voltage and **Cell max current discharge**. In the example above, if all properties are the same except the battery is current limited with 10A per cell (and consequently per stack), the number of stacks in parallel must be: *ceiling(50 kW / (49V * 10 A * 0.001) ) = 103 stacks in parallel*  .

  For the **Limit both current and power** option, the stacks are sized by using the current limit, and within the model at each time step the current and power through the cells are checked and reduced if necessary.