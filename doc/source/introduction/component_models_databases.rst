Models and Databases
====================

This topic lists all of SAM's performance models and describes the component-level models and databases SAM uses.

.. _systemperformance:

System Performance Models
~~~~~~~~~~~~~~~~~~~~~~~~~

The system models represent a complete renewable energy system and were developed by NREL using algorithms from partners listed below.

.. list-table::
   :width: 100%
   :align: center
   :header-rows: 1

   * - Model Name
     - Model Developer
   * - Biomass Combustion
     - NREL
   * - CSP Generic Model
     - NREL
   * - CSP Integrated Solar Combined Cycle
     - NREL
   * - CSP Linear Fresnel Direct Steam
     - NREL
   * - CSP Linear Fresnel Molten Salt
     - NREL
   * - CSP Parabolic Trough (Empirical)
     - NREL
   * - CSP Parabolic Trough (Physical)
     - NREL, University of Wisconsin
   * - CSP Power Tower Molten Salt
     - NREL, University of Wisconsin
   * - Energy Storage
     - NREL
   * - Fuel Cell
     - NREL
   * - Custom Generation Profile
     - NREL
   * - Geothermal
     - NREL, Princeton Energy Resources International
   * - High Concentration PV
     - NREL
   * - Marine Energy
     - NREL
   * - Photovoltaic (detailed)
     - NREL with component models from Sandia National Laboratories and the University of Wisconsin
   * - Photovoltaic (PVWatts)
     - NREL
   * - Process Heat Linear Fresnel Direct Steam
     - NREL
   * - Process Heat Parabolic Trough
     - NREL
   * - Solar Water Heating
     - NREL
   * - Wind
     - NREL

.. _componentperformance:

Component Performance Models
~~~~~~~~~~~~~~~~~~~~~~~~~~~~

The detailed photovoltaic and wind power models include options for choosing a component performance model to represent part of the system.

.. list-table::
   :width: 100%
   :align: center
   :header-rows: 1

   * - Model Name
     - Component
     - Developer
   * - Simple Efficiency Module Model
     - Photovoltaic module
     - NREL
   * - CEC Performance Model with Module Data base
     - Photovoltaic module
     - University of Wisconsin 
   * - CEC Performance Model with User Entered Specifications
     - Photovoltaic module
     - Adapted by NREL
   * - Sandia PV Array Performance Model with Module Database
     - Photovoltaic module
     - Sandia National Laboratories
   * - Single Point Efficiency Inverter
     - Inverter
     - NREL
   * - Sandia Performance Model for Grid Connected PV Inverters
     - Inverter
     - Sandia National Laboratories
   * - Wind Turbine Design Model
     - Wind Turbine
     - NREL
   * - Wind Power Curve Model
     - Wind Turbine
     - NREL

.. _componentdatabases:

Component Parameter Databases
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Some of the component models use a library of input parameters to represent the performance characteristics of the component. The libraries listed below are owned by organizations other than NREL.

.. list-table::
   :width: 100%
   :align: center
   :header-rows: 1

   * -  Library Name
     - Component
     - Owner
   * - CEC Modules
     - PV module
     - California Energy Commission
   * - Sandia Inverters
     - Inverter
     - Sandia National Laboratories
   * - Sandia Modules
     - PV module
     - Sandia National Laboratories

Online Financial Model Data
~~~~~~~~~~~~~~~~~~~~~~~~~~~

.. _financialdata:

SAM can automatically download data from the following online databases to populate values on its financial model input pages.

.. list-table::
   :width: 100%
   :align: center
   :header-rows: 1

   * - Database Name
     - Type of Data
     - Database Manager
   * - `OpenEI U.S. Utility Rate Database <http://en.openei.org/wiki/Utility_Rate_Database>`__
     - Retail electricity prices and rate structures
     - NREL and Illinois State University

.. _weatherdata:

Online Renewable Resource and Weather Data Sources
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

SAM can automatically download renewable energy resource and weather data from the following online databases.

.. list-table::
   :width: 100%
   :align: center
   :header-rows: 1

   * - Database Name
     - Type of Resource Data
     - Database Manager
   * - `National Solar Radiation Database <https://nsrdb.nrel.gov/>`__
     - Solar and Meteorological
     - NREL 
   * - `Wind Integration Datasets <https://www.nrel.gov/grid/wind-toolkit.html>`__
     - Wind and Meteorological
     - NREL with 3Tier and AWS Truepower

Solar and Wind Resource Files
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

SAM comes with a small set of sample weather files for the solar and wind performance models. You can use the download tools on the Location and Resource page to download solar resource data and from the Wind Resource input page to download wind data.