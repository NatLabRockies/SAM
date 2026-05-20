
The voltage properties are technical specifications available on most battery manufacturer data sheets.

.. note:: When you change the battery type, SAM changes the voltage properties inputs to default values appropriate for the battery chemistry you selected. You can use these default values unless you have better information from a manufacturer's data sheet or other source.

Battery voltage varies with state of charge as the internal open circuit potential decreases or increases. Voltage variations in charging and discharging affect the battery's round-trip efficiency reported in the results. During charging, voltage increases, requiring more power to charge the cell. During discharge the voltage decreases and less power can be extracted. The round-trip efficiency is computed as the net amount of energy discharged from a cell divided by how much energy it took to charge the cell.

**Cell Internal resistance, Ohm**
  The cell internal resistance for each cell in the battery in Ohms. SAM assumes that this is a constant value and uses it in voltage and thermal calculations by scaling the cell internal resistance to a total battery resistance based on the cell configuration.

**Nominal bank voltage, VDC**
  The battery bank voltage from the **Computed Properties** on the Battery Cell and System page.

**Nominal cell voltage, VDC**
  The nominal voltage of a single cell from the **Current and Capacity** inputs on the Battery Cell and System page.

Electrochemical Model
.....................

The electrochemical voltage model can be used for Lithium-ion and lead acid batteries and provides a way to characterize the battery's voltage curve using data provided on some battery manufacturer data sheets. It is disabled for flow batteries. The model is described in Section 2.1 of `DiOrio (2015) Technoeconomic Modeling of Battery Energy Storage in SAM <https://sam.nrel.gov/battery-storage/battery-publications.html>`__.

**C-rate of discharge curve**
  Battery manufacturer data sheets typically include a set of curves like the one below that show cell voltage as a function of charge removed for different discharge rates. The "C-rate" is the current used to discharge the battery. It is defined as the current divided by the rated capacity.

  In this example, if the discharge current is given at the 20-hour discharge rate, the C-rate would be *I\ :sub:`20`\ ÷ q\ :sub:`20`\ × C = 0.05 × C (C/20)*  .

.. image:: /images/IMG_BATT-DischargeCurve.png
   :align: center
   :alt: IMG_BATT-DischargeCurve.png

**Cutoff cell voltage, VDC**
  The minimum allowed cell voltage.

**Nominal zone cell voltage, VDC**
  The cell voltage (Vnom) at the end of the nominal zone, as shown in the Nominal Current Discharge Characteristic graph below.. The cell charge removed at this point is |EQ_BATT_Nominal|  .

**Exponential zone cell voltage, VDC**
  The cell voltage (Vexp) at the end of the exponential zone, as shown in the Nominal Current Discharge Characteristic graph below. The cell charge removed at this point is |EQ_BATT_Exponential|  .

**Fully charged cell voltage, VDC**
  The cell voltage (Vfull) at the given C-rate when a cell is at its maximum charge.

.. note:: The voltage inputs must satisfy Vfull > Vexp > Vnom.

**Charge removed at exponential and nominal point**
  Voltage vs discharge curves show that cell-voltage typically undergoes several distinct regions depending on charge. 

.. image:: /images/IMG_BATT-NominalDischargeCharacteristic.png
   :align: center
   :alt: IMG_BATT-NominalDischargeCharacteristic.png

**C-rate of discharge curve**
  This parameter determines the shape of the voltage curve between the end of the nominal zone and 100% discharge.

Voltage Table
.............

The voltage table option defines the voltage curve using data from the voltage table. It can be used for any type of battery, but requires data not often provided on manufacturer data sheets.

SAM uses linear interpolation with an adjustment for cell internal resistance for cell voltage calculations during simulations. Each row in the table must have a different voltage value.

The voltage table must contain at least two values, and must include cell voltage values less than and greater than the cell nominal voltage. 

To use the voltage table to define the voltage curve:

#. Choose **Voltage table**.

#. For **Rows**, type the number of pairs of voltage - depth of discharge pairs you want to use to define the voltage. The table will expand to the number of rows you type.

You can also click Import to import data from a text file. Try clicking Export to create a template file to see what the text format should be.

#. Type values in the depth of discharge and cell voltage columns. The Voltage Discharge graph will update as you type.

.. |EQ_BATT_Exponential| image:: /images/EQ_BATT_Exponential.png
.. |EQ_BATT_Nominal| image:: /images/EQ_BATT_Nominal.png
