
For a description of the snow model, see the following publications available along with other technical documentation from the `SAM website <https://sam.nrel.gov/photovoltaic/pv-sub-page-2.html>`__:

* Gilman, P.; Dobos, A.; DiOrio, N.; Freeman, J.; Janzou, S.; Ryberg, D. (2018) SAM Photovoltaic Model Technical Reference Update. 93 pp.; NREL/TP-6A20-67399

* Ryberg, D.; Freeman, J. (2017).  Integration, Validation and Application of a PV Snow Coverage Model in SAM. National Renewable Energy Laboratory. 33 pp. TP-6A20-68705 available along with other technical documentation from the `SAM website <https://sam.nrel.gov/photovoltaic/pv-sub-page-2.html>`__.

Use the following output variables to explore the effect of snow cover (see :doc:`Results <../detailed-photovoltaic-model/pv_results>` for descriptions of the variables):

* **Array DC power loss due to snow (kW)**

* **Weather file snow depth file (cm)**

.. note:: Snow depth data is not available in the NSRDB PSM V3 dataset. It is available in the `NSRDB 1961 - 1990 Archive Data <https://nsrdb.nrel.gov/data-sets/archives.html>`__. This older data does not represent the best up-to-date data from the NSRDB, but may be useful for testing SAM's snow loss model.


The Ryberg (2017) paper cited above includes a United States map of annual average snow loss values that could be used to estimate snow loss using inputs on the Losses page instead of the snow model when snow depth data is not available.

SAM's snow model for photovoltaic systems estimates the loss in system output during time steps when the array is covered in snow. It uses snow depth data from the weather file, and for time steps with snow, estimates the percentage of the photovoltaic array that is covered with snow based on the array's tilt angle, plane-of-array irradiance, and ambient temperature. The model assumes that the array is completely covered with snow when the snow depth data indicates a snowfall, and that snow slides off the array as the ambient temperature increases.

**Estimate snow losses**
  Check this option to model snow losses if the weather file on the   Location and Resource   page includes snow depth data.