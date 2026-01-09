Detailed Photovoltaic Model
===========================

The following overview is to help you get started modeling  a photovoltaic system with the detailed photovoltaic model. For a description of the model, see :doc:`Performance Models <../introduction/technology_options>`.

For a complete technical description of SAM's photovoltaic model, see Gilman, P. (2015). SAM Photovoltaic Model Technical Reference. National Renewable Energy Laboratory. 59 pp.; NREL/TP-6A20-64102. (`PDF 840 KB <https://docs.nrel.gov/docs/fy15osti/64102.pdf>`__)

Basic Steps
-----------

**1. Choose a weather file**

* On the :doc:`Location and Resource <pv_location_and_resource>` page, choose a weather file to represent the solar resource at the project location.

**2. Specify the system's characteristics**

#. On the :doc:`Module <pv_module>` page, choose a model option and module.

   For most applications, use the CEC Performance Model with Module Database model unless your module is not in the list, in which case you can use the CEC Performance Model with User Specifications.

#. On the :doc:`Inverter <pv_inverter>` page, choose a model option and inverter. 

   Use the Inverter CEC Database option. For an inverter that is not in the list, if you have the manufacturer's data sheet, choose the Inverter Datasheet model.

#. On the :doc:`pv_system_size` page, specify the system's size and array tracking options.

   Use the specify desired array size option for preliminary analysis, and then use specify modules and inverters to refine the system design.

#. If you want to account for shading losses, use the :doc:`pv_soiling_shading_snow` page for external shading by nearby objects, array self-shading, or to account for losses due to the array being covered by snow when your weather data includes snow depth data.

#. Account for soiling losses, DC power losses, AC power losses, and losses due to system availability requirements on the :doc:`pv_electrical_losses` page. You can use the default values if you do not have detailed information about those losses for your system.

**3. Specify the project costs**

* On the :doc:`Installation costs <../installation-costs/cc_pv>` and :doc:`Operating costs <../operating-costs/oc_operating>` pages, specify values for capital cost and operation and maintenance costs.

**4. Run a simulation and review results**

* Click Simulate, and review :doc:`results <pv_results>` on the :doc:`Results Page <../getting-started/results_page>`.

.. image:: ../images/SS_MainWindow-RunAllSimulationsButton.png
   :align: center
   :alt: SS_MainWindow-RunAllSimulationsButton.png

.. _postsimulationwarnings:

Post-simulation Notices
-----------------------

After completing a simulation, SAM checks to see whether the inverter appears to be over- or under-sized based on the actual DC output of the array. If it finds any problems, it displays :doc:`notices <../results/notices>` after simulations are complete.

**Inverter undersized**
  The array output is greater than inverter rated capacity for one or more of the 8,760 hours in one year. SAM reports the number of hours that the array's simulated DC output is greater than the inverter's AC rated capacity.

  If the number of hours is small compared to the 8,760 hours in a year, you may choose to ignore the message. Otherwise, you may want to try increasing the inverter capacity.

  For example, for a system with 400 kWdc array capacity and 150 kWac total inverter capacity, SAM displays the following warning message: "pvsamv1: Inverter undersized: The array output exceeded the inverter rating 157.62 kWdc for 2128 hours."

  The following :doc:`time series graphs <../results/timeseries>` show the array's DC output in red, and the system's AC output in blue, indicating that the inverter capacity is limiting the system's AC output.
  
  This graph shows the time series data for one year:

  .. image:: ../images/IMG_PVError-time-series-inverter-undersized.png
     :align: center
     :alt: IMG_PVError-time-series-inverter-undersized.png

  And this one shows the same data zoomed in to five days:

  .. image:: ../images/IMG_PVError-days-inverter-undersized.png
     :align: center
     :alt: IMG_PVError-days-inverter-undersized.png

**Inverter output less than 75 percent of inverter rated capacity**
  SAM compares the inverter's maximum AC output to the total inverter AC capacity and displays a simulation warning if the inverter's maximum AC output is less than 75% of the total inverter rated AC capacity.

  For example, for a system with 400 kWdc array capacity and 750 kWac inverter capacity, SAM displays the following warning message: "pvsamv1: Inverter oversized: The maximum inverter output was 43.13% of the rated value 750 kWac."

  In this case, the time series graph of gross AC output shows that the inverter output never reaches the 750 kWac capacity.

  .. image:: ../images/IMG_PVError-time-series-inverter-oversized.png
     :align: center
     :alt: IMG_PVError-time-series-inverter-oversized.png

