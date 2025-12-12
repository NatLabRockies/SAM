
The Current and Capacity parameters depend on the battery chemistry:

* For lead acid and Lithium-ion batteries, you specify a cell capacity value, and SAM displays the computed properties based on the battery bank sizing parameters.

* For flow batteries, you choose whether the battery is power- or current-limited and specify minimum and maximum rates.

Lead Acid and Lithium-ion Battery Parameters
............................................

**Desired bank voltage**
  The battery bank voltage you are trying to achieve in your design. This input is only enabled when you choose **Set desired bank size**. SAM calculates the number of cells in series based on the desired bank voltage and cell nominal voltage: 

*Number of Cells in Series = ROUND UP ( Desired Bank Voltage ÷ Cell Nominal Voltage )*

**Cell nominal voltage**
  The reference voltage of a single, fully charged cell in the battery as reported by the manufacturer. The typical nominal voltage for a lead acid cell is 2 V, and for lithium ion cell is 3.7 V. 

  SAM uses the nominal voltage to size the battery bank and compute the battery bank's nominal voltage.

**Cell capacity**
  The capacity of a single cell when the battery is fully charged. SAM sets this value to a default value when you choose a battery chemistry, but you can change its value.

Flow Battery Parameters
~~~~~~~~~~~~~~~~~~~~~~~
**Desired bank voltage**
  The battery bank voltage you are trying to achieve in your design. This input is only enabled when you choose **Set desired bank size**. SAM calculates the number of cells in series based on the desired bank voltage and cell nominal voltage: 

*Number of Cells in Series = ROUND UP ( Desired Bank Voltage ÷ Cell Nominal Voltage )*

**Cell nominal voltage**
  The reference voltage of a single, fully charged cell in the battery as reported by the manufacturer.

  SAM uses the nominal voltage to size the battery bank and compute the battery bank's nominal voltage.**Power limited with Cell max power charge and discharge**
  Limit the maximum charge and discharge power.

**Current limited with Cell max current charge and discharge**
  Limit the maximum charge and discharge current.

**Limit both current and power**
  Limit both the charge limits by both power and current.

Computed Properties
...................

The computed properties are a summary of the battery bank system design. The values may either be ones that you specify or that SAM calculates depending on whether you choose the **Set desired bank size** or **Specify cells** option.

**Nominal bank capacity, DC kWh**
  The nominal size of the battery. SAM uses this value in battery cost calculations with $/kWh units, and to determine the battery state of charge and capacity reduction over the battery life.

*Nominal Bank Capacity (DC kWh) = Cell Capacity (Ah) × Cell Voltage (VDC) × Total Number of Cells*

  The cell voltage is shown under **Battery Voltage**.

**Nominal bank power, DC kW**
  The nominal maximum discharge power in DC kW. SAM uses this value in battery cost calculations with $/kW units.

**Time at maximum power**
  The number of hours the battery could discharge continuously at its maximum discharge power. This is either the input value you provide under **Battery Bank Sizing**, or calculated as:

*Time at Maximum Power (h) = Nominal Bank Capacity (kWh) ÷ Maximum Discharge Power (kW)*

**Nominal bank voltage, VDC**
  The nominal voltage of the battery bank.

*Nominal Bank Voltage (VDC) = Cell Voltage (VDC) × Cells in Series*

**Total number of cells**
  The product of cells (stacks) in series and strings (stacks) in parallel.

**Cells in series / Cells per stack**
  The number of cells in series in each string. 

  If you choose **Set desired bank size** under **Battery Bank Sizing**:

*Cells in Series = Nominal Bank Voltage (VDC) ÷ Nominal Cell Voltage (VDC)*

  If you choose **Specify cells**, then this is the value you entered for **Number of cells in series** under **Battery Bank Sizing**.

**Strings in parallel / Stacks in parallel**
  The number of strings of battery cells in series in the battery bank. 

  If you choose **Set desired bank size** under **Battery Bank Sizing**:

*Strings in Parallel = Nominal Bank Capacity (kWh) ÷ ( Cell Capacity (Ah) × Nominal Cell Voltage (VDC) )*

  If you choose **Specify cells**, then this is the value you entered for **Number of strings in parallel** under **Battery Bank Sizing**.

**Stacks in series**
  For flow batteries, the number of stacks in series.

**Max C-rate of discharge, per/h**
  If you choose **Set desired bank size** under **Battery Bank Sizing**, SAM calculates the value as:

*Max C-rate of Discharge (per/h) = Maximum Discharge Power (DC kW) ÷ Nominal Bank Capacity (DC kWh)*

  If you choose **Specify cells**, then this is the value you entered for **Max C-rate of discharge** under **Battery Bank Sizing**.

**Max C-rate of charge, per/h**
  If you choose **Set desired bank size** under **Battery Bank Sizing**, SAM calculates the value as:

*Max C-rate of Charge (per/h) = Maximum Charge Power (DC kW) ÷ Nominal Bank Capacity (DC kWh)*

  If you choose **Specify cells**, then this is the value you entered for **Max C-rate of charge** under **Battery Bank Sizing**.

**Maximum discharge current, A**
  The battery's maximum discharge current. The battery may discharge at a rate up to the maximum.

*Maximum Discharge Current (A) = Nominal Bank Capacity (DC kWh) ÷ Nominal Bank Voltage (VDC) × Max C-rate of Discharge (1/h) × 1000 Wh/kWh*

**Maximum charge current, A**
  The battery's maximum charge current. The battery may charge at a rate up to the maximum.

*Maximum Discharge Current (A) = Nominal Bank Capacity (DC kWh) ÷ Nominal Bank Voltage (VDC) × Max C-rate of Charge (1/h) × 1000 Wh/kWh*

**Maximum discharge power, DC kW**
  The battery can discharge at up to the maximum discharge power. The maximum discharge power is also the nominal DC power of the battery bank used for $/kW-based battery cost calculations.

  When the units for **Desired bank power** are DC kW:

*Maximum Discharge Power (DC kW) = Cell Capacity (Ah) × Cell Nominal Voltage (VDC) × Max C-rate of Discharge (1/h) × Total Number of Cells ÷ 1000 W/kW*

  When the units for **Desired bank power** are AC kW, the discharge power in DC kW depends on whether the battery is AC-connected or DC-connected.

  AC-connected:

*Maximum Discharge Power (DC kW) = Desired Bank Power (AC kW) ÷ DC to AC Conversion Efficiency*

  DC-connected:

*Maximum Discharge Power (DC kW) = Desired Bank Power (AC kW) ÷ ( DC to AC Conversion Efficiency × Inverter Nominal Efficiency )*

**Maximum charge power, DC kW**
  The maximum charge power, calculated from the nominal bank capacity and maximum C-rate of charge.

  When the units for **Desired bank power** are DC kW:

*Maximum Charge Power (DC kW) = Cell Capacity (Ah) × Cell Nominal Voltage (VDC) × Max C-rate of Charge (1/h) × Total Number of Cells ÷ 1000 W/kW*

  When the units for **Desired bank power** are AC kW, the discharge power in DC kW depends on whether the battery is AC- or DC-connected.

  AC-connected:

*Maximum Charge Power (DC kW) = Desired Bank Power (AC kW) ÷ DC to AC Conversion Efficiency*

  DC-connected:

*Maximum Charge Power (DC kW) = Desired Bank Power (AC kW) ÷ ( DC to DC Conversion Efficiency × Inverter Nominal Efficiency )*

**Maximum discharge power, AC kW**
  The AC equivalent of the discharge power in DC kW.

  For the **Set desired bank size** option, if the **Desired bank power** units are AC kW, SAM sets the maximum discharge power to the desired value.

  Otherwise, it is calculated from the DC value:

  AC-connected:

*Maximum Discharge Power (AC kW) = Maximum Discharge Power (DC kW) × DC to AC Conversion Efficiency*

  DC-connected:

*Maximum Discharge Power (AC kW) = Maximum Discharge Power (DC kW) × ( DC to DC Conversion Efficiency × Inverter Nominal Efficiency )*

**Maximum charge power, AC kW**
  The AC equivalent of the charge power in DC kW.

  For the **Set desired bank size** option, if the **Desired bank power** units are AC kW, SAM sets the maximum charge power to the desired value.

  Otherwise, it is calculated from the DC value:

  AC-connected:

*Maximum Charge Power (AC kW) = Maximum Charge Power (DC kW) × DC to AC Conversion Efficiency*

  DC-connected:

*Maximum Charge Power (AC kW) = Maximum Charge Power (DC kW) × ( DC to DC Conversion Efficiency × Inverter Nominal Efficiency )*