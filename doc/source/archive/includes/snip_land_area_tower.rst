
The land area inputs determine the total land area in acres that you can use to estimate land-related costs in $/acres on the :doc:`Installation Costs <../installation-costs/cc_trough>` and :doc:`Operating Costs <../operating-costs/oc_operating>` pages.

**Non-Solar Field Land Area, acres**
  The land area in acres occupied by the project, not including the heliostat field.

**Solar Field Land Area Multiplier**
  The total solar field land area, including the area occupied by heliostats and space between heliostats, expressed as a multiple of the area occupied by heliostats. The default value is 1.3, which represents a total solar field land area that is 1.3 times the area occupied by heliostats.

**Calculated Total Land Area, acres**
  Land area required for the entire system including the solar field land area.

*Total Land Area (acres) = Non-Solar Field Area (acres) + Area of Zones Occupied by Heliostats (m²) × Solar Field Land Area Multiplier × 0.0002471 (acres/m)*

  The area of zones occupied by heliostats depends on the field geometry, which is either calculated by the SolarPILOT optimization algorithm, or for a rectangular field, depends on the geometry you specify.

  The land area appears on the Installation Costs page, where you can specify land costs in dollars per acre.