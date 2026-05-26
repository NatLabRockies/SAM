
The Location and Resource page provides access to the solar resource library, which is a collection of weather files stored on your computer. When you first install SAM, it comes with a few default weather files in the library. As you use SAM for your own projects, you should add files to build your own library. Once files are in your library, you can use them for different projects and with different versions of SAM.

.. image:: /images/SS_SolarResource-library.png
   :align: center
   :alt: SS_SolarResource-library.png

.. image:: /images/SS_SolarResource-download.png
   :align: center
   :alt: SS_SolarResource-download.png

.. image:: /images/SS_SolarResource-information.png
   :align: center
   :alt: SS_SolarResource-information.png

There are two ways to add files to your solar resource library:

1. Download files from the NLR National Solar Radiation Database (NSRDB)

Use the download weather file options and click **Download and add to library** to get the most up-to-date data from the NSRDB for long-term cash flow analysis, single-year analysis, and P50/P90 analysis.

2. Add weather file folders

If you have weather files from a source other than the NSRDB or that you've downloaded yourself directly from the NSRDB website, click **Add/remove weather file folders** to add the folder containing the files to the **Solar Data File Folders** list. SAM automatically adds any weather files it finds in these folders to the solar resource library so they will appear in the list.

When you install SAM, it creates the default download folder <user>/SAM Downloaded Weather Files folder where weather files you download from the NSRDB are stored. You can change that folder by clicking **Add/remove weather file folders** and changing the **Folder for Downloaded Solar Data Files**.

For a list of sources of data other than the NSRDB, see the `Weather Data page on the SAM website <https://sam.nlr.gov/weather-data.html>`__.

See also
........

:doc:`Weather File Formats <../weather-file-formats/weather_format>`

:doc:`Weather Data Elements <../weather-data/weather_data_elements>`

:doc:`Typical and Single Year <../weather-data/weather_typical_single>`

:doc:`Time and Sun Position <../weather-data/weather_time_convention>`

:doc:`Folders and Libraries <../weather-data/weather_manage_folders>`

:doc:`Weather Data and LK <../weather-data/accessing-weather-data-from-lk>`

 


.. note:: You may want to model your system using weather data for several different locations around your project site, and if available, from different data sources to understand how sensitive your analysis results are to the weather assumptions, and how much variation there is in the data from the different weather files.


.. note:: You can compare results for a system using more than one weather file in a single case by using SAM's :doc:`parametric simulation <../simulation-options/parametrics>` option.


.. note:: For more information about weather data, including where to find data for locations outside of the United States, see `Weather Data <https://sam.nlr.gov/weather>`__ on the SAM website.


.. note:: For a helpful discussion of weather data and power system simulation, see Sengupta, M.; Habte, A.; Gueymard, C.; Wilbert, S.; Renne, D.; Stoffel, T. (2017). "Best Practices Handbook for the Collection and Use of Solar Resource Data for Solar Energy Applications: Second Edition." NREL Report No. TP-5D00-68886. (`PDF 8.1 MB <https://www.nlr.gov/docs/fy18osti/68886.pdf>`__)


Solar Resource Library
~~~~~~~~~~~~~~~~~~~~~~
SAM's solar resource library displays information from weather files in your solar resource data folders. The default solar resource library that comes with SAM contains weather files for a few locations around the United States for the default configurations. As you use SAM, use **Add/remove weather file folders** to build a library of files for locations you frequently use as described in :doc:`Folders and Libraries <../weather-data/weather_manage_folders>`.

To choose a file from the solar resource library:

* Click the location name in the list. You can type a few letters of the file name in the Search box to filter the list.

The full file name and information about the selected file appears under **Weather Data Information**. To see the data in the file, click **View data**.

.. image:: /images/SS_SolarResource-library.png
   :align: center
   :alt: SS_SolarResource-library.png

**Add/remove weather file folders**
  Use the folder settings to tell SAM what folders on your computer it should scan for weather files to build the solar resource library. SAM adds any files it can identify as valid weather files in each folder you specify to the library.

  Before adding a file to the library, SAM checks the data in the file displays a message if it finds any problems with the data in the file.

  SAM will only add valid weather files to the library. If you add a folder that contains CSV files that are not in the SAM CSV format, it will not add those files to the library.

  The list of solar resource folders are the folders that SAM scans for weather files to build the solar resource library.

**Refresh library**
  Refresh the library after adding files to the weather file folder. In most cases, SAM should automatically refresh the library as needed, but you may need to manually refresh it.


Download Weather Files
~~~~~~~~~~~~~~~~~~~~~~
.. include:: /includes/snip_solar_download.rst

Weather Data Information
~~~~~~~~~~~~~~~~~~~~~~~~
.. image:: /images/SS_SolarResource-information.png
   :align: center
   :alt: SS_SolarResource-information.png

**Weather File**
  The path and name of the active weather file SAM will use for simulation. Download a different file from the NSRDB, or click a different file name in the library to change the file.

**View data**
  Display weather file data in the :doc:`time series data viewer <../reference/time_series_viewer>`  .

.. note:: You can also see the data after running a simulation on the Results page :doc:`data tables <../results/data>` and :doc:`time series graphs <../results/timeseries>`.

Header Data from Weather File
.............................

Header data is information in the weather file that describes the location and type of data in the file. SAM uses the time zone, elevation, latitude and longitude to calculate the sun position during simulations. It does not use the city, state, country, and other descriptive information.

Annual Values Calculated from Weather File
..........................................

When you add a weather file to the solar resource library, SAM reads weather data from the file and calculates the annual values to display for your reference. It does not use annual values during simulations.

**Global horizontal, Direct normal (beam), Diffuse horizontal**
  The sum of solar irradiance data (W/m  \ :sup:`2`\   ) in the weather file converted to kW and divided by 365 days/year.

**Average temperature**
  The sum of temperature data (°C) in the weather file divided by the number of records in the file (8760 for hourly data).

**Average wind speed**
  The sum of wind speed data (m/s) in the weather file divided by the number of records in the file (8760 for hourly data).

**Maximum snow depth**
  If the weather file contains snow depth data, the maximum value of snow depth data (cm) in the weather file. NaN indicates the file does not contain snow depth data. Snow depth data is required for to model snow losses for the Detailed Photovoltaic and PVWatts models.

.. note:: For information about where to find weather files with snow depth data, see the note on the `Weather Data <https://sam.nlr.gov/weather-data.html>`__ page of the SAM website.

**Annual albedo**
  If the weather file contains albedo (ground reflectance) data, the average value of albedo values in the weather file. NaN indicates the file does not contain albedo data.

About the NSRDB
~~~~~~~~~~~~~~~
The `NLR National Solar Radiation Database (NSRDB) <https://nsrdb.nlr.gov/>`__ is an online database of weather files containing solar resource data in the :doc:`SAM CSV format <../weather-file-formats/weather_format_sam_csv_solar>`. Files are available both as :doc:`typical-year <../weather-data/weather_typical_single>` files and :doc:`single-year <../weather-data/weather_typical_single>` files. The database covers the parts of the world shown in the map below. The current data is called PSM (Physical Solar Model).

.. image:: /images/IMG_NSRDB-map.png
   :align: center
   :alt: IMG_NSRDB-map.png

.. note:: SAM's CSP models assume that each DNI value in the weather file represents the average irradiance over the time step, and calculate sun angles for the midpoint of the time step. For hourly weather files from the NSRDB, the irradiance data for each time step is measured instantaneously at the time indicated by the minute column. For hourly data, minute = 30, so the irradiance data is measured at midpoint of each hour. For subhourly data, the irradiance data is measured at the beginning of each time step. As a result, if you use an NSRDB weather file with a CSP model with subhourly data, the sun angle for each time step will be for a different time than the time for the instantaneous irradiance values. See :doc:`Time Convention and Sun Position <../weather-data/weather_time_convention>` for additional details.

 


.. note:: The NSRDB requires an email address to download weather file. When you download a weather file from SAM, SAM submits the email address that you used to :doc:`register SAM <../reference/registration>`. NLR uses your email address to determine how many people are using the NSRDB. It does not share email addresses.


.. note:: SAM uses the `Google Maps API Geocoding Service <https://developers.google.com/maps/documentation/geocoding/>`__ service to identify the geographic coordinates (latitude and longitude) of a location when you type a street address or city and state name to identify the location.


.. note:: For information about downloading weather files and data from other sources, see the `Weather Data <https://sam.nlr.gov/weather-data>`__ page on the SAM website.

SAM downloads weather files with the following hourly data from the NSRDB:

* Direct normal (beam) irradiance, DNI (W/m²)

* Diffuse horizontal irradiance, DHI (W/m²)

* Dry-bulb temperature (°C)

* Dew-point temperature (°C)

* Relative humidity (%), for single-year files only

* Atmospheric pressure (mbar)

* Wind speed at 2 meters above the ground (m/s)

* Wind direction (°E of N)

* Albedo

.. note:: Weather files with snow depth data for the Detailed Photovoltaic model are not available from the NSRDB PSM dataset. They are available for 239 locations in the United States from the legacy MTS1 (TMY2) files in the original format, which cover the period 1961 - 1990. See :ref:`Snow Losses <pvsnowlosses>` for details.