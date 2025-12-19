Tracking Layout Land
====================

The Tracking Layout Land inputs are for array tracking and orientation, physical layout, and land area calculations.

Subarrays
~~~~~~~~~

To enable and disable subarrays, use the check boxes under "Subarrays" on the :doc:`pv_system_size` page.

.. _trackingorientation:

Tracking and Orientation
~~~~~~~~~~~~~~~~~~~~~~~~

The tracking options allow you specify whether and how modules in each subarray follow the movement of the sun across the sky.

.. note:: SAM does not adjust installation or operating costs on the Installation costs or Operating costs pages based on the tracking options you specify. When you change the tracking option, be sure to also change costs as appropriate.

.. tip:: Use the following output variables to explore the effect of tracking and orientation inputs (see :doc:`Results <pv_results>` for detailed descriptions):

   * **Subarray [n] Angle of incidence**
   * **Subarray [n] Angle of incidence modifier**
   * **Subarray [n] Axis of rotation for 1 axis trackers**
   * **Subarray [n] Axis rotation ideal for 1 axis trackers**
   * **Subarray [n] Surface azimuth**
   * **Subarray [n] Surface tilt**

   SAM also reports the sun angles, which can be helpful for comparing the array orientation to the position of the sun:

   * **Sun altitude angle**
   * **Sun azimuth angle**
   * **Sun zenith angle**

**Fixed**
  The subarray is fixed at the tilt and azimuth angles defined by the values of **Tilt** and **Azimuth** and does not follow the sun's movement.

  .. image:: ../images/IMG_PVArray-fixed-tilt.png
     :align: center
     :alt: IMG_PVArray-fixed-tilt.png

**1 Axis**
  The subarray is fixed at the angle from the horizontal defined by the value of **Tilt** and rotates about the tilted axis from east in the morning to west in the evening to track the daily movement of the sun across the sky. **Azimuth** determines the array's orientation with respect to a line perpendicular to the equator. For a horizontal subarray with one-axis tracking and a north-south axis of rotation that rotates from east to west, use a **Tilt** value of zero and **Azimuth** value of 180 degrees.

  .. image:: ../images/IMG_PVArray-one-axis.png
     :align: center
     :alt: IMG_PVArray-one-axis.png

**2 Axis**
  The subarray rotates from east in the morning to west in the evening to track the daily movement of the sun across the sky, and north-south to track the sun's seasonal movement throughout the year. For two-axis tracking, SAM ignores the values of the **Tilt** and **Azimuth** inputs.

  .. image:: ../images/IMG_PVArray-two-axis.png
     :align: center
     :alt: IMG_PVArray-two-axis.png

**Azimuth Axis**
  The subarray rotates in a horizontal plane to track the daily movement of the sun. SAM ignores the value of the **Azimuth** input.

  .. image:: ../images/IMG_PVArray-azimuth-axis.png
     :align: center
     :alt: IMG_PVArray-azimuth-axis.png

**Tilt = Latitude**
  Assigns the latitude value stored in the weather file and displayed on the :doc:`Location and Resource <pv_location_and_resource>`   page to the tilt angle. Note that SAM does not display the tilt value on the System Design page, but does use the correct value during the simulation.

  The value of the Tilt input must be positive, so for southern latitudes, SAM sets the tilt angle to the negative value of the latitude.

  Use the **Subarray [n] Surface tilt (degrees)** output variable to confirm the behavior of the the Tilt=Latitude option. 

**Tilt angle, degrees**
  The array's tilt angle in degrees from horizontal, where zero degrees is a horizontal array, and 90 degrees is a vertical array. The tilt value must be between zero and 90 degrees, inclusive.

  As a rule of thumb, system designers sometimes use the location's latitude (shown on the Location and Resource page) as the optimal array tilt angle. The actual tilt angle will vary based on project requirements. You can run a :doc:`parametric analysis <../simulation-options/parametrics>`   on tilt to find its optimal value.

  The effect of the tilt angle depends on the tracking option:

* **Fixed**: The tilt angle is the angle formed between the surface of the array and a horizontal line parallel to the azimuth. An array with an azimuth angle of 180° and a tilt angle of 20° would be tilted from the horizontal at 20° facing south. An array with an azimuth angle of 0° and a tilt angle of 20° would be tilted from the horizontal at 20° facing north. For a horizontal array, use a tilt angle of zero.

* **1 Axis**: The tilt angle is the angle between the axis of rotation and the horizontal. One-axis trackers typically have a tilt angle of zero for a horizontal tracking axis.

* **2 Axis**: The Tilt input is disabled because the tracker sets the tilt and azimuth angle so the array follows the movement of the sun.

* **Azimuth Axis**: The tilt angle is fixed, and is the angle formed between the surface of the array and a line perpendicular to the bottom edge of the array.

* **Seasonal Tilt**: You can specify a fixed tilt angle for each month of the year.

**Azimuth angle, degrees**
  The azimuth angle in degrees determines the array's east-west orientation, where 0 = North, 90 = East, 180 = South, and 270 = West, regardless of whether the array is in the northern or southern hemisphere. The azimuth value must be greater than or equal to zero and less than 360.

  The effect of the azimuth angle depends on the tracking option:

* **Fixed**: The azimuth angle determines the direction the array faces. North of the equator, the azimuth for a south-facing array is 180 degrees. South of the equator, the azimuth for a north-facing array is 0 degrees.

* **1 Axis**: The azimuth angle determines the orientation of the rotation axis. An azimuth of 180 is for a tracker with a North-South rotation axis that rotates from East to West. When the azimuth angle is 180°, the rotation angles reported in the results are negative when the tracker faces east and positive when it faces west. When the azimuth angle is 0°, rotation angles are positive when the tracker faces east and negative when it faces west.

* **2 Axis**, **Azimuth Axis**: The Azimuth input is disabled because the tracker sets the azimuth angle so the array follows the movement of the sun.

* **Seasonal Tilt**: The azimuth definition is the same as for the Fixed option. The azimuth angle does not change for the seasonal tilt option.

**Tracker Rotation Limit, degrees**
  For one-axis trackers, the maximum and minimum allowable rotation angle. A value of 45 degrees would allow the tracker to rotate 45 degrees about the center line in both directions from the horizontal.

.. _backtracking:

**Backtracking**
  Backtracking is a one-axis tracking strategy that avoids row-to-row shading.

  Without backtracking, a one-axis tracker points the modules toward at the sun. For an array with closely spaced rows, modules in adjacent rows will shade each other at certain sun angle. With backtracking, under these conditions, the tracker orients the modules away from the sun to avoid shading.

  The following diagram illustrates how backtracking avoids row-to-row shading for a simple array with two rows:

  .. image:: ../images/IMG_PVBacktracking-Description.png
     :align: center
     :alt: IMG_PVBacktracking-Description.png

.. _arraydimensions:

Row Dimensions and Spacing
~~~~~~~~~~~~~~~~~~~~~~~~~~

To model the effects of self shading and snow cover, SAM needs basic information about the arrangement of modules and rows in each subarray. The total number of modules in each subarray is defined on the :doc:`pv_system_size` page.

.. note:: The Array Dimensions input are only active for a subarray when you either choose a self-shading option, or check the Snow Losses check box.

  SAM assumes that modules in each subarray are laid out in rectangles. It cannot calculate self shading or snow coverage losses for subarrays with irregular shapes.

  The array dimensions for self shading and snow coverage are different from the electrical wiring of strings defined on the :doc:`pv_system_size` page.

.. image:: ../images/IMG_SelfShad-definitions.png
   :align: center
   :alt: IMG_SelfShad-definitions

.. image:: ../images/IMG_SelfShad-dimensions.png
   :align: center
   :alt: IMG_SelfShad-dimensions

Dimensions from Module Page
---------------------------

**Module width, m**
  The width of the short side of the module.

  module width = *√( module area ÷ module aspect ratio )*

**Module length, m**
  The length of the long side of the module.

  *module length = √( module area × module aspect ratio )*

**Module area, m²**
  The module area from the :doc:`Module page <pv_module>`  .


**Module aspect ratio**
  The ratio of the module length to module width. 

  The built-in module libraries for the CEC and Sandia module models contain data for the area of each module, but not for the module length and width. For this reason, you must provide the aspect ratio as an input for the self-shading calculations. You can use the module dimensions for your module from the manufacturer data sheet to calculate the aspect ratio, and compare SAM's calculated values to the values on the data sheet to check your work.

Row Dimensions
--------------

**Module orientation**
  The module orientation determines whether the short or long side of the module is parallel to the ground, assuming that all modules in the array are mounted at a fixed angle from the horizontal equal to the tilt angle specified on the :doc:`pv_system_size`   page.

  Portrait orientation means the short end of the module is parallel to the ground, or at the bottom of the module.

  Landscape orientation means the long end of the module is parallel to the ground, or at the bottom of the module.

**Number of modlues in subarray**
  The total number of modules in each subarray, as defined on the :doc:`pv_system_size`   page.

**Number of modules along side of row**
  The number of modules along the edge of the subarray array perpendicular to the bottom of the array as defined below.

**Number of modules along bottom of row**
  The number of modules along the bottom of a row, which is the edge of the row nearest to the ground.

  For fixed arrays, the bottom edge is perpendicular to the azimuth angle. For example, for a fixed array in the northern hemisphere and an azimuth angle of 180 degrees, the bottom of the row is the southernmost edge of the row.

  For arrays with one-axis tracking, the bottom edge is parallel to the tracking axis, which is determined by the azimuth angle. For example, for a one-axis tracking array with an azimuth angle of 180 degrees, the bottom of each row is the edge closest to the east in the morning.

**Number of rows**
  The number of rows given the number of modules in the subarray from the :doc:`pv_system_size`   page and the numbers of modules along the side and bottom of row that you specify.

*Number of Rows = Number of Modules in Subarray ÷ Number of Modules along Side ÷ Number of Modules along Bottom*

  To model a realistic rectangular arrangement of modules, the number of rows should be an integer: The product of the number of modules along the side and bottom of each subarray should be a divisor of the total number of modules in the subarray.

.. note:: A subarray with only one row will not experience any self shading.

   If the number of rows is one or is not an integer, SAM generates a simulation message but will still run and generate results.

Row Spacing
-----------

**GCR**
  The ratio of the photovoltaic array area to the ground area occupied by the array. For an array configured in rows of modules, the GCR is the length of the side of one row divided by the distance between the bottom of one row and the bottom of its neighboring row. Increasing the GCR decreases the spacing between rows.

  The ground coverage ratio must be a value greater than 0.01 and less than 0.99.

  SAM uses the GCR to estimate :ref:`self-shading losses <pvselfshading>`   for fixed and one-axis trackers, determine when to backtrack for one-axis trackers with backtracking enabled, and to estimate the array's land requirement for :doc:`installation cost <../installation-costs/cc_pv>`   calculations.

  For bifacial modules, SAM also uses the GCR to calculate irradiance on the rear of the array .

  To see the effect of the ground coverage ratio on the system's performance, after running a simulation, you can compare the time series results Nominal POA total irradiance (kW/m  \ :sup:`2`\   ) and POA total irradiance after shading only (kW/m  \ :sup:`2`\   ). You can also run a :doc:`parametric analysis <../simulation-options/parametrics>`   on the ground coverage ratio value to find its optimal value.

**Row spacing, m**
  The distance in meters between the bottom of any two rows in the subarray. SAM displays this value for reference. The self-shading calculations use the module area and GCR.

  *row spacing estimate = length of side ÷ GCR*

**Length of side, m**
  The length of the side of a row. The bottom of the row is parallel to the ground, and the side is perpendicular to the bottom.

  For portrait module orientation:

  *length of side = module length × number of modules along side of row*

  For landscape module orientation:

  *length of side = module width × number of modules along side of row*

Terrain Slope
~~~~~~~~~~~~~

The terrain slope and azimuth angles describe the inclination of the ground with respect to horizontal, assuming the subarray is installed on uniformly sloped, flat land. Terrain inputs are only enabled for systems with one-axis tracking. Their effect depends on the self shading options on the :doc:`pv_soiling_shading_snow` page:

* Backtracking enabled: Backtracking algorithm takes the terrain angles into consideration to calculate the tracker rotation angle. 

* Linear self shading enabled: Self-shading algorithm accounts for terrain angles to calculate the shaded fraction of the array.

* Non-linear self shading enabled with no backtracking: Terrain angles do not affect the self-shading calculations.

.. note:: The terrain angles are not available for fixed (no tracking) subarrays, or subarrays with two axis, azimuth axis, or seasonal tilt tracking options.

The terrain slope model is described in Anderson, K.; Mikofski, M. (2020) Slope-aware Backtracking for Single-axis Trackers. National Renewable Energy Laboratory. 24 pp. NREL/TP-5K00-76626. (`PDF 783 KB <https://www.nrel.gov/docs/fy20osti/76626.pdf>`__), also listed at https://sam.nrel.gov/photovoltaic/pv-publications.html.

**Terrain slope, degrees (0 to 90 degrees)**
  The grade slope angle, defined as the angle between the slope plane and the horizontal plane. Zero is for horizontal ground with no slope.

**Terrain azimuth, degrees (0 to 360 degrees)**
  Grade azimuth angle, defined as the angle clockwise from north of the horizontal projection of falling slope. Zero is for a north-facing slope, or ground that slopes down toward the north.

.. _pv-landarea:

Land Area Estimate
~~~~~~~~~~~~~~~~~~

.. include:: ../includes/snip_land_area_pv.rst
