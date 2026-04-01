Reference Inputs
================

SAM uses the reference condition parameters in an iterative process to calculate the total collector error for a given set of values for the aperture diameter, focal length, and collector diameter. Once the collector error is calculated, that value can be used to calculate a new intercept factor for different aperture diameters (See Fraser, p 150-151).

.. _dish_referenceinputs:

Input Variable Reference
~~~~~~~~~~~~~~~~~~~~~~~~
Collector Reference Condition Inputs
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

**Intercept Factor**
  Fraction of energy reflected from the parabolic mirror that enters the receiver aperture. The intercept factor can be increased by increasing the concentration ratio or by increasing the size of the aperture. Intercept factors typically range between 0.94 and 0.99.

**Focal Length of Mirror (m)**
  Parabolic mirror focal length.

.. _dish_parasiticsreferenceconditions:

Parasitic Variable Reference Conditions
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
The reference condition parameters given in the table below and as user inputs in SAM are used in the pump law calculations that are part of the parasitic loss equations.

.. list-table::
   :width: 100%
   :align: center
   :header-rows: 1

   * - Variable
     - SES
     - WGA
     - SBP
     - SAIC
   * - Pump Parasitic Power
     - 150
     - 100
     - 175
     - 300
   * - Pump Speed (rpm)
     - 1800
     - 1800
     - 1800
     - 1800
   * - Cooling Fluid Type
     - 50% EG
     - 50% EG
     - water
     - 50% EG
   * - Cooling Fluid Temperature (K)
     - 288
     - 288
     - 288
     - 288
   * - Cooling Fluid Volumetric Flow Rate (gal/min)
     - 9
     - 7.5
     - 7.5
     - 12
   * - Cooling System Fan Test Power (W)
     - 1000
     - 410
     - 510
     - 2500
   * - Cooling System Fan Test Speed (rpm)
     - 890
     - 890
     - 890
     - 850
   * - Fan Air Density  (kg/m3)
     - 1.2
     - 1.2
     - 1.2
     - 1.2
   * - Fan Volumetric Flow Rate (CFM)
     - 6000
     - 4000
     - 4500
     - 10000