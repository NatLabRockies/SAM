Losses
======

The losses inputs account for soiling and electrical losses that the module and inverter models do not account for. After running a simulation, you can see the effect of these losses on  :doc:`results <../getting-started/results_page>` by displaying the results variables described below in :doc:`data tables <../results/data>` and :doc:`time series graphs <../results/timeseries>`.

Irradiance Losses
~~~~~~~~~~~~~~~~~

Irradiance losses account for reduction in incident solar irradiance caused by dust or other seasonal soiling of the module surface   that reduce the radiation incident on the subarray. Soiling losses cause a uniform reduction in the total irradiance incident on each subarray. 

SAM calculates the nominal incident irradiance value for each time step using solar irradiance values from the weather file, and sun and subarray angles. When you specify soiling losses, SAM adjusts the nominal incident irradiance value by each soiling loss percentage that applies to the time step. You can see the effect of soiling losses in hourly results by comparing values of the nominal POA irradiance with the "after shading only" and "after shading and soiling" values. The radiation incident on the subarray is the POA total irradiance after shading and soling value (W/m\ :sup:`2`\ ).

.. note::  Soiling losses apply in addition to any losses you specify on the :doc:`Shading and Layout <pv_shading>` page.

**Monthly soiling loss**
  Click **Edit values** to specify a set of monthly soiling losses. To apply a single soiling loss to all months to represent a constant loss throughout the year, in the Edit Values window, type a value for **Enter single value** and then click **Apply**.

  For example, a soiling loss of 5% for January would reduce the plane-of-array irradiance for the front of the array by 5% for all time steps in January.

**Average annual soiling loss**
  SAM shows the average of the twelve monthly soiling loss values for your reference. It applies the monthly soiling losses during simulations, not the average annual value.

Rear-side Shading and Soiling for Bifacial Modules
..................................................

When you enable the bifacial model on the :doc:`Module <pv_module>` page, SAM enables two additional irradiance losses to account for soiling on the rear side of the array that differ from front-side soiling.   SAM reduces the irradiance incident on the rear-side of the array by the bifacial rear soiling and bifacial rack shading percentage. The bifacial soiling losses are constant and do not change from month to month.

  Peláez, S.; Deline, C.; Stein, Joshua.; Marion, B.; Anderson, K; Muller, M. (2019) Effect of torque-tube parameters on rear-irradiance and rear-shading loss for bifacial PV performance on single-axis tracking systems. IEEE 46th Photovoltaic Specialists Conference (PVSC), vol. 2, pp. 1-6. IEEE. (`PDF 835 KB <https://www.nrel.gov/docs/fy20osti/73203.pdf>`__  )

**Bifacial rear soiling (%)**
  A percentage of the irradiance incident on the rear-side of the bifacial array to account for soiling on the rear side of the array.

**Bifacial rack shading (%)**
  A percentage of the irradiance incident on the rear-side of the bifacial array to account for shadows of racking equipment on the rear side of the array.

The following results show the effect of these losses, which you can see on the :doc:`Losses <../results/losses>`, :doc:`Data Tables <../results/data>`, and :doc:`Time Series <../results/timeseries>` tabs on the Results page. See :doc:`Detailed PV model Results <pv_results>` for descriptions of these and other variables.:

* **POA blocked by rear soiling (kWh/yr)**

* **POA rear-side rack shaded loss (%)**

* **Array POA rear-side radiation blocked by rear soiling (kW)**

* **Array POA rear-side radiation blocked by racks (kW)**

.. _dclosses:

DC Losses
~~~~~~~~~

The DC losses account for DC electrical losses on the DC side of the system that the module model does not calculate, such as electrical losses in the DC wiring that connects modules in the array.

The five DC loss categories (mismatch, diodes and connections, etc) are to help you keep track of factors influencing the total DC loss. You can see the effect of the total DC loss in the hourly results:

*Net DC array power = Subarray 1 Gross DC power × ( 1 - Subarray 1 Total DC power loss ÷ 100% )*
 *+ Subarray 2 Gross DC power × ( 1 - Subarray 2 Total DC power loss ÷ 100% )*
 *+ Subarray 3 Gross DC power × ( 1 - Subarray 3 Total DC power loss ÷ 100% )*
 *+ Subarray 4 Gross DC power × ( 1 - Subarray 4 Total DC power loss ÷ 100% )*

The five DC loss categories represent the following sources of DC electrical loss for each subarray:

**Module mismatch, %**
  Slight differences in performance of individual modules in the array.

**Diodes and connections, %**
  Voltage drops across blocking diodes and electrical connections.

**DC wiring, %**
  Resistive losses in wiring on the DC side of the system.

**Tracking error, %**
  Inaccuracies in the tracking mechanisms ability to keep the array oriented toward the sun. The default value of zero assumes a fixed array with no tracking. Applies only to systems with one- or two-axis tracking arrays.

**Nameplate, %**
  Accounts for accuracy of the manufacturer's nameplate rating, often for the performance degradation modules may experience after being exposed to light. SAM allows a negative nameplate rating of up to -5% to account for modules that exceed their nameplate rating.

**Bifacial electrical mismatch, %**
  For bifacial modules, accounts for electrical mismatch between modules in the array caused by variation of irradiance on the the rear-side of the array.

  Click **Calculate** to automatically calculate the bifacial electrical mismatch based on the method described in Deline, C.; Silvana Ayala P.; Sara M.; Carlos O. (2020) `Estimating and parameterizing mismatch power loss in bifacial photovoltaic systems <https://doi.org/10.1002/pip.3259>`__. *Progress in Photovoltaics: Research and Applications* 28, no. 7 (2020): 691-703.

**DC power optimizer loss, %**
  Accounts for power losses of any power conditioning equipment installed with the array. SAM does not explicitly model DC/DC conversion losses, but you can account for them here.

The total DC power loss for each subarray represents the subarray's total DC electrical loss:

**Total DC power loss, %**
  The total DC power loss is the total loss that applies to each subarray:

*Total DC power loss = 100% × { 1 - [ ( 1 - Mismatch ÷ 100% )*
 *× ( 1 - Diodes and connections ÷ 100% )*
 *× ( 1 - DC wiring ÷ 100% )*
 *× ( 1 - Tracking error ÷ 100% )*
 *× ( 1 - Nameplate ÷ 100% )*
 *× ( 1 - Bifacial electrical mismatch ÷ 100% )*
 *× ( 1 - DC power optimizer loss ÷ 100% )] }*

Default DC Losses
.................

If you are not sure what values to use for the DC loss percentages, you can apply default losses appropriate for your system design.

.. note:: When you click one of the default loss buttons, SAM replaces the values of all six DC loss categories with the default values shown in the table below below. After applying the default DC losses, you should change the tracking error and nameplate loss percentages as needed because those two losses are not affected by the type of inverter or presence of DC optimizers in the system.

**Central Inverters**
  Each string in the array is connected to an inverter.

**Microinverters**
  Each module is connected to its own :ref:`microinverter <microinverters>`  .

**DC optimizers**
  Power electronics minimize array losses.

.. list-table::
   :width: 100%
   :align: center
   :header-rows: 1

   * - 
     - Central inverters
     - Microinverters
     - DC optimizers
   * - Module mismatch
     - 2
     - 0
     - 0
   * - Diodes and connections
     - 0.5
     - 0.5
     - 0.5
   * - DC wiring
     - 2
     - 2
     - 2
   * - Tracking error
     - 0
     - 0
     - 0
   * - Nameplate
     - 0
     - 0
     - 0
   * - DC power optimizer loss
     - 0
     - 0
     - 1

.. _aclosses:

AC Losses
~~~~~~~~~

The AC losses account for electrical wiring losses on the AC side of the system that the inverter model does not account for. During simulations, SAM uses the total AC loss to reduce the inverter AC electric output calculated by the inverter model.

.. note:: For the PV Battery model, battery dispatch is affected by AC losses.

**AC wiring**
  Loss to account for electrical losses in AC wiring between the inverter and the grid connection point.

  For PV-Battery systems and AC-connected batteries, the AC Wiring loss is not applied, so should be included in the DC to AC conversion efficiency on the Battery Cell and System page. The AC wiring loss is applied for DC-connected batteries.

Subhourly Clipping Loss Correction
..................................

  Subhourly clipping loss correction accounts for inverter power limiting that may occur within the hour. For a real system, on partly cloudy days, there may be several times during an hour when the instantaneous array DC power is greater than the inverter's rated nameplate power and the inverter limits its output power to the rated power. Without subhourly clipping correction, SAM's power output value may overestimate the actual output of the system. 

  Subhourly clipping loss correction is only available for hourly simulations. The time step of weather file on the Location and Resource page determines the simulation time step: SAM runs hourly simulations when the weather file contains hourly data, and subhourly simulations when the weather file contains subhourly data (data in 1, 5, 10, 15, or 30-minute time steps).

**Enable subhourly clipping loss correction**
  Choose this option to enable subhourly clipping loss correction. The option is only available for hourly simulations.

.. note:: If you change the weather file on the Location and Resource page to one with subhourly time steps, SAM automatically clears and disables the check box.

**Matrix lookup method**
  The matrix lookup method uses an empirical matrix-based model that uses clipping potential and clearness index to estimate Average-then-Clip (AtC) bias.

*   For a Python implementation of this method and a list of technical references, see Allen, J.; Dhakal, R.; Hobbs, W.; Li, W. (2024). `Allen Method for PV Subhourly Clipping Correction <https://github.com/epri-dev/allen-subhourly-clipping-correction>`__  .

**Distribution of PV output method**
  The  distribution of PV Output method uses a distribution function of power output to estimate the power limiting loss.

*   Walker, A.; Desai, J.; McDonald, B. (2020) Solar Photovoltaic Systems Time-Series Simulation: Subinterval Distribution vs. Steady-State Assumption. ASME 14th International Conference on Energy Sustainability. (`PDF 1.8 MB <https://www.nrel.gov/docs/fy20osti/76859.pdf>`__  )

Transformer and Transmission Losses
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Use transformer and transmission losses to calculate electrical losses from a distribution or substation transformer or from transmission lines in a large photovoltaic system.

SAM assumes that the transformer capacity is equal to the total inverter rated capacity from the :doc:`System Design page <pv_system_design>`. To see the effect of these losses on the inputs, see the **Transformer load loss**, **Transformer no load loss**, and **Transformer total loss** outputs on the :doc:`Results <../getting-started/results_page>` page.

.. note:: For PV-Battery systems with AC-connected batteries, SAM does not apply the transformer losses, so you should account for these losses using the DC to AC conversion efficiency on the Battery Cell and System page. The transformer losses are applied for DC-connected batteries.

**Transformer no load loss**
  The transformer's rated no load loss as a percentage of the total inverter AC capacity. This is a constant loss caused by the magnetizing current in the transformer's core.

**Transformer load loss**
  The transformer's rated load loss as a percentage of the inverter's AC output. These represent losses in the transformer's primary and secondary coil wiring that vary with the inverter's electrical output.

**Transmission losses**
  A reduction of the photovoltaic system's AC output due to wire losses in a transmission line.

System Availability
~~~~~~~~~~~~~~~~~~~

.. include:: ../includes/snip_system_availability.rst

