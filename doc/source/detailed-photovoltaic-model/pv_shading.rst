Shading and Layout
==================

Shading and snow losses are reductions in the incident irradiance caused by shadows or snow on the photovoltaic modules in the array.

Overview
~~~~~~~~

SAM can model the impact of a reduction in plane-of-array irradiance on each subarray caused by external shading, self shading, and snow cover. This overview describes each, with links to the sections below that list and describe the inputs.
 
.. note:: The monthly soiling losses on the :doc:`Losses <pv_losses>` page also reduce the irradiance incident on the array. When comparing incident plane-of-array irradiance data, be sure to take soiling losses into account.

.. note:: The self-shading model does not work with the **Simple Efficiency Module** model on the :doc:`Module <pv_module>` page.

External Shading
................

:ref:`External shading <externalshading>` is shading of the photovoltaic subarray by trees, buildings, roof protrusions and other nearby objects. SAM represents a shadow on the subarray in a given time step by a single **beam irradiance shading loss** for that time step, which it determines from data you provide in the beam shade loss tables in the :doc:`Edit Shading Data window <../window-reference/win_edit_shading_data>`. SAM reduces the plane-of-array beam irradiance by the shading loss percentage. For example, if a shadow occupies 25% of the subarray's surface area at 11 am, the beam shading loss for 11 am would be 25%. A shading loss of 0 means there is no shade on the subarray, and a loss of 100% means that no beam irradiance reaches the subarray.

When you specify beam irradiance shading losses by time step, you can use SAM's partial shading model to estimate the impact of partial shading on the array's electrical output. The partial shading model does not work with the month-by-hour or solar azimuth-by-altitude beam shade loss tables. For more information about the partial shading model, see MacAlpine, S.; Deline, C. (2015) Simplified Method for Modeling the Impact of Arbitrary Partial Shading Conditions on PV Array Performance. National Renewable Energy Laboratory. 8 pp.; NREL/CP-5J00-64570. (`PDF 699 KB <http://www.nrel.gov/docs/fy15osti/64570.pdf>`__)

SAM accounts for the effect of external shading on the plane-of-array diffuse irradiance using a single **sky diffuse shading loss** for the entire year.

You can generate beam and diffuse irradiance shading loss data using SAM's :ref:`3D Shade Calculator <3dshading>` or outside of SAM. SAM can :ref:`import beam and diffuse shading data <importshadingdata>` from files created by PVSyst, and beam shading data from files created by the Solmetric Suneye, and Solar Pathfinder software.

Use the following output variables to explore the effect of external shading (see :doc:`Results <pv_results>` for descriptions of the variables):

* **Subarray [1..4] External shading and soiling beam irradiance factor (frac)** (except for partial shading model)

* **Subarray [1..4] Partial external shading DC factor (frac)** (for partial shading model only)

* **Subarray [1..4] POA total irradiance after shading only (W/m2)**

* **Array POA beam radiation after shading only (kW)**

Self Shading
............

:ref:`Self shading <selfshading>` is caused by row-to-row shading of modules within a subarray, where shadows from modules in neighboring rows of the array block sunlight from parts of other modules in the array during certain times of day. SAM can estimate self shading for fixed subarrays and subarrays with one-axis tracking, assuming that each subarray consists of modules in parallel rows with the same number of modules per row.

For a description of the self-shading model implemented in SAM, see Gilman, P.; Dobos, A.; DiOrio, N.; Freeman, J.; Janzou, S.; Ryberg, D. (2018) SAM Photovoltaic Model Technical Reference Update. 93 pp.; NREL/TP-6A20-67399 available along with other technical documentation from the `SAM website <https://sam.nrel.gov/photovoltaic/pv-sub-page-2.html>`__.

Use the following output variables to explore the effect of self shading (see :doc:`Results <pv_results>` for descriptions of the variables):

* **Subarray [1..4] Self-shading linear beam irradiance factor** (thin film linear only)

* **Subarray [1..4] Self-shading non-linear DC factor** (standard non-linear only)

* **Subarray [1..4] Self-shading non-linear sky diffuse irradiance factor** (thin film linear and standard non-linear)

* **Subarray [1..4] Self-shading non-linear ground diffuse irradiance factor** (thin film linear and standard non-linear)

Snow Losses
...........

When your weather file contains snow depth data, SAM can estimate :ref:`snow losses <snow>` in the array's output caused by snow covering the modules in the subarray.

Shading and Snow Inputs
~~~~~~~~~~~~~~~~~~~~~~~

.. _3dshading:

3D Shade Calculator
~~~~~~~~~~~~~~~~~~~

.. include:: ../shade-calculator-reference/sc-overview.rst

.. _externalshading:

Shade Loss Tables for External Shading
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

To model external shading of a subarray in SAM, you provide a set of beam shading loss percentages in one of the beam shade loss tables, and a single sky diffuse shading loss.

To enable the external shading:

#. Click **Edit Shading** for the subarray for which you want to enable external shading to open the :doc:`Edit Shading Data <../window-reference/win_edit_shading_data>` window. (Define the subarrays on the :doc:`System Design <pv_system_design>` page.)

#. If you are working with a shading file from PVsyst, Solmetric Suneye, or Solar Pathfinder software, in the Edit Shading window, click the appropriate button under **Import shading data from external tools** to :ref:`import the file <importshadingdata>`.

#. If you are using a :ref:`beam shade loss table <beamshadelosstables>` to specify shading factors (you can type, import, or paste values into the table), check the appropriate **Enable** box in the Edit Shading window to display the table.

SAM does not prevent you from enabling more than one beam shade loss table even if that results in an unrealistic shading model. Be sure to verify that you have enabled the set of shade loss tables you intend before running a simulation.

.. image:: ../images/IMG_PVShading-EnableDisable.png
   :align: center
   :alt: IMG_PVShading-EnableDisable.png

.. _arraydimensions:

Array Dimensions for Self Shading, Snow Losses, and Bifacial Modules
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

To model the effects of self shading and snow cover, SAM needs basic information about the arrangement of modules and rows in each subarray. The total number of modules in each subarray is defined on the :doc:`System Design <pv_system_design>` page.

.. note:: The Array Dimensions input are only active for a subarray when you either choose a self-shading option, or check the Snow Losses check box.

.. note:: SAM assumes that modules in each subarray are laid out in rectangles. It cannot calculate self shading or snow coverage losses for subarrays with irregular shapes.

.. note:: The array dimensions for self shading and snow coverage are different from the electrical wiring of strings defined on the :doc:`System Design <pv_system_design>` page.

.. image:: ../images/IMG_SelfShad-definitions.png
   :align: center
   :alt: IMG_SelfShad-definitions

.. image:: ../images/IMG_SelfShad-dimensions.png
   :align: center
   :alt: IMG_SelfShad-dimensions

**Module orientation**
  The module orientation determines whether the short or long side of the module is parallel to the ground, assuming that all modules in the array are mounted at a fixed angle from the horizontal equal to the tilt angle specified on the :doc:`System Design <pv_system_design>`   page.

  Portrait orientation means the short end of the module is parallel to the ground, or at the bottom of the module.

  Landscape orientation means the long end of the module is parallel to the ground, or at the bottom of the module.

**Number of modules along side of row**
  The number of modules along the edge of the subarray array perpendicular to the bottom of the array as defined below.

**Number of modules along bottom of row**
  The number of modules along the bottom of a row, which is the edge of the row nearest to the ground.

  For fixed arrays, the bottom edge is perpendicular to the azimuth angle. For example, for a fixed array in the northern hemisphere and an azimuth angle of 180 degrees, the bottom of the row is the southernmost edge of the row.

  For arrays with one-axis tracking, the bottom edge is parallel to the tracking axis, which is determined by the azimuth angle. For example, for a one-axis tracking array with an azimuth angle of 180 degrees, the bottom of each row is the edge closest to the east in the morning.

**Number of rows**
  The number of rows given the number of modules in the subarray from the :doc:`System Design <pv_system_design>`   page and the numbers of modules along the side and bottom of row that you specify.

*Number of Rows = Number of Modules in Subarray ÷ Number of Modules along Side ÷ Number of Modules along Bottom*

  To model a realistic rectangular arrangement of modules, the number of rows should be an integer: The product of the number of modules along the side and bottom of each subarray should be a divisor of the total number of modules in the subarray.

.. note:: A subarray with only one row will not experience any self shading.

.. note:: If the number of rows is one or is not an integer, SAM generates a simulation message but will still run and generate results.

**Modules in subarray from System Design page**
  The total number of modules in each subarray, as defined on the :doc:`System Design <pv_system_design>`   page.

**Length of side (m)**
  The length of the side of a row. The bottom of the row is parallel to the ground, and the side is perpendicular to the bottom.

  For portrait module orientation:

*length of side = module length × number of modules along side of row*

  For landscape module orientation:

*length of side = module width × number of modules along side of row*

**GCR from System Design page**
  Ground coverage ratio from the :doc:`System Design <pv_system_design>`   page, equivalent to the length of the side of one row divided by the distance between the bottom of one row and the bottom of its neighboring row.

**Row spacing estimate (m)**
  The distance in meters between the bottom of any two rows in the subarray. SAM displays this value for reference. The self-shading calculations use the module area and GCR.

*row spacing estimate = length of side ÷ GCR*

**Module aspect ratio**
  The ratio of the module length to module width. 

  The built-in module libraries for the CEC and Sandia module models contain data for the area of each module, but not for the module length and width. For this reason, you must provide the aspect ratio as an input for the self-shading calculations. You can use the module dimensions for your module from the manufacturer data sheet to calculate the aspect ratio, and compare SAM's calculated values to the values on the data sheet to check your work.

**Module length**
  The length of the long side of the module.

*module length = √( module area × module aspect ratio )*

**Module width**
  The width of the short side of the module.

  module width = *√( module area ÷ module aspect ratio )*

**Module area**
  The module area from the :doc:`Module page <pv_module>`  .

.. _selfshading:

Self Shading for Fixed Subarrays and One-axis Trackers
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

The self-shading model estimates the reduction in the array's DC output due to row-to-row shading of modules within the subarray, where shadows from modules in adjacent rows of the array block sunlight from parts of other modules in the array during certain times of day.

The response of a real photovoltaic module to shading is complex, and depends on several factors, including photovoltaic cell material, shape and layout of cells in the module, and configuration of bypass diodes in the module. SAM's self-shading model makes the following simplifying assumptions.

For the **Standard (non-linear)** option:

* The cell material is crystalline silicon, either mono-crystalline or poly-crystalline. The self-shading model does not work for modules with thin film cells. SAM indicates the cell material on the :doc:`Module <pv_module>` page under Physical Characteristics.

* Each module in the array consists of square cells arranged in a rectangular grid with three bypass diodes.

* The array uses the fixed or one-axis tracking option on the :doc:`System Design <pv_system_design>` page. The self-shading model does not work for two-axis or azimuth-axis tracking.

For the **Thin film (linear)** option, the subarray's DC output responds linearly to the reduction in plane-of-array irradiance.

.. note:: Self shading is only available for fixed subarrays, or for subarrays with one-axis tracking.

.. note:: Self shading is not available with the :ref:`Simple Efficiency Module Model <module-spe>` on the Module page.
 
For one-axis tracking subarrays with backtracking and/or with non-linear self-shading, you can use the terrain inputs on the :doc:`System Design <pv_system_design>` page to specify the slope of the ground.

Self Shading Inputs
...................

The self-shading inputs consist of the :ref:`array dimension inputs <arraydimensions>` that apply to both the self shading and snow loss, and the self-shading inputs described below.

**Self shading**
  **None** uses the approach of versions of SAM before SAM 2014.1.14. Because this option does not account for any self-shading, it tends to overestimate the array's production. We included this option to allow for comparison between the different options to see the effect of the self-shaded and backtracking options, and for comparison between results from this version and older versions of SAM.

  **Standard (non-linear)** is appropriate for most types of modules with crystalline silicon cells. It estimates losses from self-shading caused by shading of modules in one row by modules in neighboring rows based on the GCR value you specify.

  **Thin film (linear)** is for modules with thin-film cells or for specially-designed modules with cells and bypass diodes wired in such a way that the modules output varies linearly with shaded area of the module.

.. _snow:

Snow Losses
~~~~~~~~~~~

.. include:: ../includes/snip_snow.rst

