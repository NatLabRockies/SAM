System Size
===========

The inputs on System Size page determine the following:

* Size of the photovoltaic array.

* Whether the array is divided into subarrays.

* Number of inverters.

Basic Sizing Steps
~~~~~~~~~~~~~~~~~~

If you just want to quickly size the system for an array with a single subarray, follow these steps:

#. Choose a :doc:`module <pv_module>` and :doc:`inverter <pv_inverter>`.

#. Choose **Specify desired size and DC/AC ratio**.

#. Type a value for **Desired array size in DC kW**. For example, type 5 for a 5 kWdc array, 500 for a 500 kWdc array, or 10,000 for a 10 MWdc array. There is no limit to the array size.

#. Type a value for **Desired DC to AC ratio**, or use the default value. This determines the inverter capacity.

If your system includes battery storage, configure the battery bank on the :doc:`Battery Storage <../battery-storage/battery_storage_btm>` page.

See :ref:`PV Sizing and Configuration <pv-sizing>` for configuration examples and detailed sizing instructions.

.. admonition:: Sizing Considerations and Limitations

   SAM can only model systems with one type of module and one type of inverter.

   Choosing an appropriate module and inverter for your system depends on many factors, some of which are outside of the scope of SAM. Finding the right combination of inverter and module to model for your system in SAM will probably require some trial and error and iteration.

   Reference conditions depend on the conditions used to define the parameters on the :doc:`Module <pv_module>` page. For the Sandia and CEC module models, reference conditions are at Standard Test Conditions (STC), which is defined as 1,000 W/m² incident radiation and 25ºC cell temperature.

   You can run the **System Sizing** :doc:`macro <../reference/macros>` to generate a report to help you ensure the system is sized correctly.

System Size
~~~~~~~~~~~

The System Size inputs include options and high-level parameters for sizing the system.

**Specify number of modules and inverters**
  Use this option to size the system manually, or to size a system with more than one subarray.

**Specify desired size and DC/AC ratio**
  This option only works for systems with a single subarray. Use this option to have SAM automatically determine the number of modules per string, strings in parallel, and number of inverters.
  
  SAM calculates the number of modules and inverters to get as close as possible to the desired size. Use this option for a rough estimate of an array layout.
  
For detailed sizing instructions see :ref:`PV Sizing and Configuration <pv-sizing>`  .

.. note:: The desired array size and DC to AC ratio is likely to be different from the actual nameplate capacity and DC to AC ratio because the desired array size is typically not an even multiple of the module capacity.

**DC to AC ratio**
  The ratio of total inverter DC capacity to total AC capacity. This is a value that SAM calculates and displays for reference.

  High DC to AC ratios may result in inverter power clipping.

**Number of inverters**
  The total number of inverters in the system. The number of inverters determines the total AC capacity.

  SAM assumes that all inverters operate at the same voltage. This effectively assumes that for systems with multiple inverters, the inverters are connected in parallel so that the system's MPPT voltage limit ratings are the same as those of a single inverter.

.. note:: If you are modeling a system with microinverters, see :ref:`Modeling Microinverters <microinverters>` for instructions. For systems with multiple power point trackers, see :ref:`Systems with Multiple Power Point Trackers <multiplemppt>`.

Alternatively, if you are modeling a system with one subarray, you can have SAM attempt to size the array automatically by clicking **Estimate Subarray 1 configuration** and entering a desired array size and DC to AC ratio.

The sizing summary variables are values SAM calculates based on the inputs you specify. Use these values to verify that the system is sized correctly.

**Nameplate DC capacity, kWdc**
  The maximum DC power output of the array at the reference conditions shown on the :doc:`Module <pv_module>`   page:

*Nameplate Capacity (kWdc) = Module Maximum Power (Wdc) × 0.001 (kW/W) × Total Modules*

  The module's maximum power rating is from the :doc:`Module <pv_module>`   page. The number of modules is the value listed under **Actual Layout**.
 
**Total AC capacity, kWac**
  The total inverter capacity in AC kilowatts:

*Inverter Total Capacity (kWac) = Inverter Maximum AC Power (Wac) × 0.001 (kW/W) × Number of Inverters*

  The inverter's nominal AC power rating is from the :doc:`Inverter <pv_inverter>`   page.

**Total inverter DC capacity, kWdc**
  The total inverter capacity in DC kilowatts:

*Inverter Total Capacity (kWdc) = Inverter Maximum DC Input Power (Wdc) × 0.001 (kW/W) × Number of Inverters*

  The inverter's maximum DC input power is from the the :doc:`Inverter <pv_inverter>`   page.

**Number of modules**
  The number of modules in the array:

*Total Modules = Modules per String × Strings in Parallel*

  The numbers of modules and strings are the values listed under **Actual Layout**.

**Number of strings**
  The number of strings of modules in the array.

**Total module area, m²**
  The total area in square meters of modules in the array, not including space between modules:

*Total Area (m²) = Module Area (m²) × Number of Modules*

  The area of a single module is from the :doc:`Module <pv_module>`   page.

System Sizing Messages
----------------------

The sizing messages do not prevent you from running a simulation.

.. image:: ../images/SS_PV-ArraySizingMessages.png
   :align: center
   :alt: SS_PV-ArraySizingMessages.png

The sizing messages display the following information for each subarray:

* DC to AC ratio based on the array and inverter capacities:

*Actual DC to AC Ratio = Total Nameplate Array Capacity in DC kW ÷ Total Nameplate Inverter Capacity in DC kW × 100%*

* Array string open circuit voltage exceeds inverter maximum DC voltage:

*String Voc > Inverter Maximum DC Voltage*

* Array string maximum power voltage exceeds the inverter maximum MPPT voltage:

*String Vmp > Maximum Inverter MPPT Voltage*

* Array string maximum power voltage is less than the inverter minimum MPPT voltage:

*String Vmp < Minimum Inverter MPPT Voltage*

Subarrays
~~~~~~~~~

When you create a new case for the Detailed Photovoltaic model, SAM creates a system with one subarray. If you are modeling a system as a single array, you do not need to enable any other subarrays.

To model a system that consists of multiple subarrays, check **Enable** for each additional Subarray 2, 3, or 4.

For example, to configure strings for a 10 MW system consisting of SunPower SPR-305 modules, and Advanced Energy Solaron 333 inverters with two subarrays of 5 MW each with different azimuth angles:

#. On the :doc:`Module <pv_module>` and :doc:`Inverter <pv_inverter>` pages, choose the SunPower module and Solaron inverter, respectively.

#. On the :doc:`pv_system_size` page, under **AC Sizing**, type 4 for **Number of inverters**.

#. Clear **Estimate Subarray 1 configuration**. It is not possible for SAM to automatically size a system with more than one subarray.

#. Under **DC Sizing and Configuration**, for **Subarray 1**, specify 8 modules per string and 220 strings in parallel, and an azimuth angle of 180.

#. Enable Subarray 2, and specify 8 modules per string and 220 strings in parallel for Subarray 2, and an azimuth angle of 170.

.. note:: You can enable any combination of subarrays. For example, you can model a system with two subarrays by enabling Subarrays 1 and 3, and disabling Subarrays 2 and 4.

   SAM can only model systems with one type of module, and one type of inverter. You cannot use subarrays to model a system that combines different types of modules or inverters.

Modeling multiple subarrays may be useful for the following applications:

* A residential or commercial rooftop system with modules installed on different roof surfaces with different orientations or string lengths.

* A ground-mounted system with groups of modules installed at different orientations, with different string lengths, DC wiring lengths, or exposed to different shading scenes or soiling conditions.

* A system that combines different tracking systems

**Enable**
  If your system has a single subarray, you do not need to enable additional subarrays. Subarray 1 is always enabled.

  If your system has more than one subarray, for example, for different sections of a roof-top array with different orientations, then you should check **Enable** for each of up to four subarrays.

Subarrays and String Size
~~~~~~~~~~~~~~~~~~~~~~~~~

The DC Sizing and Configuration inputs determine the size and configuration of the photovoltaic array and its orientation and tracking. The array may consist of up to four subarrays, each of which may have different string lengths, orientation, and tracking.

For more about sizing and configuration, see :ref:`PV Sizing and Configuration <pv-sizing>`.

**Modules per string in subarray**
  The number of modules connected in series in a single string for each subarray.

  The number of modules per string determines the subarray's open circuit string voltage (Voc) and maximum power rated string voltage (Vmp):

*Subarray Voc (V) = Module Voc (V) × Modules Per String in Subarray*

*Subarray Vmp (V) = Module Vmp (V) × Modules Per String in Subarray*

  As an initial rule of thumb, choose a number of modules per string so that the string Voc is less than the inverter's maximum DC voltage rating, and the string Vmp is between the inverter's minimum and maximum MPPT voltage rating. You can run a simulation and look at the operating voltages in the results to see how they compare to the voltage ratings. You can also use the System Sizing :doc:`macro <../reference/macros>`   to refine your design.

**Strings in parallel in subarray**
  The number of strings of modules connected in parallel to form a subarray.

  Once you specify the number of modules per string to determine the subarray's string voltage, the number of strings in parallel and number of subarrays determine the system  nameplate DC capacity in kilowatts:

*Modules per Subarray = Modules per String in Subarray × String in Parallel in Subarray*

*Total Number of Modules = Modules per Subarray × Number of Subarrays*

*Nameplate DC Capacity (kW) =  Total Number of Modules × Module Maximum Power (W) ÷ 1000 (W/kW)*

  For each subarray that has more than one string in parallel, SAM calculates the subarray voltage using the :ref:`PV subarray voltage <pvmismatchoption>` mismatch method you choose.

**Number of modules in subarray**
  The number of modules in each subarray depends on the number of modules per string, and number of strings in parallel in each subarray:

*Number of Modules in Subarray = Modules per String in Subarray × Strings in Parallel in Subarray*

*Total Number of Modules = Sum of Number of Modules in Subarrays 1 - 4*

**String Voc at reference conditions, V**
  The open circuit DC voltage of each string of modules at the module reference conditions shown on the :doc:`Module <pv_module>`   page:

*String Voc (V) = Module Open Circuit Voltage (V) × Modules per String*

**String Vmp at reference coinditions, V**
  The DC voltage at the module maximum power point of each string of modules at the module reference conditions shown on the :doc:`Module <pv_module>`   page:

*String Vmp (Vdc) = Module Max Power Voltage (Vdc) × Modules per String*

.. _multiplemppt:

Inverter Input Voltage
~~~~~~~~~~~~~~~~~~~~~~

Multiple MPPT Inputs
--------------------

For systems with one inverter, when you enable more than one subarray, SAM calculates a separate operating voltage for each subarray.

By default, SAM assumes a single operating voltage at the inverter input. For systems with more than one subarray, each subarray operates at its own voltage, and the inverter input voltage is either the average of the subarray voltages or calculated using an  iterative method, depending on the method you choose for :ref:`the voltage mismatch option <pvmismatchoption>`.

If your system has one inverter and supports multiple maximum power point tracking, you can set **Number of MPPT inputs** on the :doc:`Inverter <pv_inverter>` page to the number of MPPTs, and assign an inverter MPPT input to each subarray so that the operating voltage at each inverter input is the same as its assigned subarray operating voltage. This feature is makes it possible to model systems with up to four subarrays with different orientations, shading, or tracking options, such as a rooftop system with groups of modules facing in different directions.

.. note:: The term "MPPT input" refers to the electrical connection to a maximum power point tracker (MPPT). The MPPT electrical circuit(s) in your system may be integrated with the inverter or in one or more separate devices. In either case, use the Number of MPPT inputs on the :doc:`Inverter <pv_inverter>` page to represent the number of MPPT circuits in your system.

To assign multiple MPPTs:

#. On the System Design page, set the number of inverters to one.

#. On the :doc:`Inverter <pv_inverter>` page, set **Number of MPPT inputs** to the number of inputs (up to four).

#. On System Design page, click **Set MPPT inputs** to automatically enable a subarray for each inverter input and assign an input number. 

There should be the same number of enabled subarrays as inverter MPPT inputs, and each subarray should have a different inverter input number. 

For example, if your system has two MPPTs, then set the number of MPPT inputs (on the Inverter page) to 2, enable two subarrays, and assign the number 1 to Subarray 1, and 2 to Subarray 2. The numbers you assign do not have to match the subarray number, but each subarray should have a unique number.

#. For each enabled subarray, set the number of modules per string and other parameters.

Inverter Voltage Limits
-----------------------

**Maximum DC voltage, Vdc**
  The inverter's maximum rated input DC voltage from the :doc:`Inverter <pv_inverter>`   page.

  For systems with more than one inverter, SAM assumes that inverters are connected in parallel so that the rated voltages of the inverter bank are the same as those of a single inverter.

**Minimum/Maximum MPPT voltage, Vdc**
  The inverter minimum and maximum operating voltages, as specified by the manufacturer, from the :doc:`Inverter <pv_inverter>`   page.

.. _pvmismatchoption:

Inverter Input Voltage for Multiple Subarrays
---------------------------------------------

The subarray mismatch option is an advanced option that calculates the effect of voltage mismatch between subarrays for systems with two or more subarrays.

Because the number of modules per string is the same for all subarrays in the system, the subarrays have the same nominal string voltage. However, during operation each subarray is exposed to different radiation levels and wind speeds, which causes the cell temperatures in each subarray to differ. Because cell voltage depends on cell temperature, each subarray will have slightly different voltages. This voltage mismatch causes electrical losses so that the inverter input voltage is less than the array's maximum power voltage.

SAM uses two methods to estimate the inverter input voltage.

**Averaging Method (check box clear)**
  SAM calculates each subarray's output at its maximum power point voltage (Vmp), and assumes that the inverter DC input voltage is the average of the subarray Vmp values.

  This method is fast and works with both the Sandia and CEC module option.

**Iterative Method (check box checked)**
  SAM tries many string voltages to find the value that results in the maximum power from the array.  For each test voltage, it finds the current from each subarray, and adds up the currents. Then the power is the summed current times the test voltage. The test voltage that yields the maximum power is used for each subarray to calculate the total output power, and this voltage is also the inverter DC input voltage.

  This method takes on the order of 10-30 seconds for a system with two or more subarrays.

 


.. note:: The subarray mismatch option is only active with the CEC model option on the :doc:`Module <pv_module>` page.


.. note:: The iterative method typically results in lower system output over the year than the averaging method. The averaging method is a reasonable approximation of mismatch losses, and is suitable for simulations where the main metric of interest is the system's total annual output for financial analysis. The difference in annual output between the two methods is often less than one percent.
