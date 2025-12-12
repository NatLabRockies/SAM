Collector
=========

The collector consists of parabolic mirrors, a support structure, and two-axis tracking system. The mirrors focus direct normal solar radiation on the aperture of the receiver. The receiver aperture size is typically optimized to maximize the quantity of reflected solar radiation that enters the receiver and minimize convection and radiation losses out of the aperture.

.. include:: ../includes/snip_dish_references.rst

* Section 2.1, p 7

* Section 3.1, p 63

* Appendix A, p 150

* Appendix A, p 158

.. _dish_collectorinputs:

Input Variable Reference
~~~~~~~~~~~~~~~~~~~~~~~~
The parameters on the Collector page are used to calculate the power output of the collector. The parameters are for a single dish collector, and are assumed to apply to each dish in the solar field.

Mirror Parameters
~~~~~~~~~~~~~~~~~

**Projected Mirror Area (m****\ :sup:`2`\****)**
  Area of one concentrator's mirror projected on the aperture plane. Used to calculated the solar power intercepted by the receiver, and the shading factor.

**Total Mirror Area (m****\ :sup:`2`\****)**
  Area of mirrored parabolic surface. Used to calculate collector diameter, which is used in the rim angle calculation and in the shading factor calculation.

**Mirror Reflectance**
  The mirror reflectance input is the solar weighted specular reflectance. The solar-weighted specular reflectance is the fraction of incident solar radiation reflected into a given solid angle about the specular reflection direction. The appropriate choice for the solid angle is that subtended by the receiver as viewed from the point on the mirror surface from which the ray is being reflected. For parabolic troughs, typical values for solar mirrors are 0.923 (4-mm glass), 0.945 (1-mm or laminated glass), 0..906 (silvered polymer), 0.836 (enhanced anodized aluminum), and 0.957 (silvered front surface). 

Performance
~~~~~~~~~~~

**Insolation Cut In (W/m****\ :sup:`2`\****)**
  Direct normal radiation value above which the cooling system fan operates. Used to calculated parasitic losses.

.. _dish_collectordefaults:

Default Parameter Values
~~~~~~~~~~~~~~~~~~~~~~~~
Table . Collector default parameter values.

.. list-table::
   :width: 100%
   :align: center
   :header-rows: 1

   * - Variable
     - SES
     - WGA
     - SBP
     - SAIC
   * - Projected Mirror Area
     - 87.7
     - 41.2
     - 56.7
     - 113.5
   * - Total Mirror Area
     - 91.0
     - 42.9
     - 60
     - 117.2
   * - Insolation Cut In
     - 200
     - 275
     - 250
     - 375
   * - Wind Stow Speed
     - 16
     - 16
     - 16
     - 16
   * - Receiver Aperture Diameter for Reference Intercept Factor
     - 0.184
     - 0.14
     - 0.15
     - 0.38
   * - Reference Intercept Factor
     - 0.995
     - 0.998
     - 0.93
     - 0.90
   * - Reference Focal Length of Mirror
     - 7.45
     - 5.45
     - 4.5
     - 12.0