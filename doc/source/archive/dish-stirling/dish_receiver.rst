Receiver
========

The receiver absorbs thermal energy from the parabolic concentrator and transfers the energy to the working fluid of the Stirling engine. The receiver consists of an aperture and absorber. The receiver aperture is located at the parabolic concentrator's focal point. The current version of SAM models one receiver type, direct illumination receivers, in which solar radiation is directly absorbed by absorber tubes containing the working fluid. Direct illumination receivers are the receiver type most commonly used for dish-Stirling systems.

.. include:: ../includes/snip_dish_references.rst

* Section 2.2, p 14

* Section 6.1, p 133

* Section 6.2, p 134

* Appendix A, p 153

SAM uses the receiver parameters to calculate thermal losses from the receiver, which typically account for over 50% of the system's total losses. Other system losses include collector losses due to mirror reflectivity, receiver intercept losses, and Stirling engine losses. Receiver thermal losses are due to conduction, convection, and radiation:

* Conductive losses through the receiver housing.

* Natural convection from the cavity in the absence of wind.

* Forced convection in the presence of wind.

* Emission losses due to thermal radiation emitted from the receiver aperture.

* Radiation losses reflected off of the receiver cavity surfaces and out of the receiver through the aperture.

.. _dish_receiverinputs:

Input Variable Reference
~~~~~~~~~~~~~~~~~~~~~~~~
Aperture
~~~~~~~~

**Receiver Aperture Diameter (m)**
  Diameter of the opening in the receiver that allows solar radiation to reach the absorber, and radiation and convection losses to escape the receiver cavity. Typical values range from 0.14 m to 0.20 m.

Insulation
~~~~~~~~~~

**Thickness (m)**
  Thickness of the receiver housing insulation. Typically about 75 mm. Used to calculate conduction losses.

**Thermal Conductivity (W/m-K)**
  Thermal conductivity of the receiver cavity wall at 550 degrees Celsius. For high-temperature ceramic fiber, the value is 0.061 W/m-K. Used to calculate conduction losses.

Absorber
~~~~~~~~

The absorber is a component of the receiver that absorbs solar radiation and transfers thermal energy to the Stirling engine.

**Absorber Absorptance**
  The ratio of energy absorbed by the receiver absorber to the solar radiation reaching the absorber. Used to calculate radiation losses.

**Absorber Surface Area (m****\ :sup:`2`\****)**
  Area of the absorber surface. Used to calculate the internal cavity area.

Cavity
~~~~~~

The cavity parameters determine the cavity's geometry. The internal cavity area is the sum of the cavity wall surface area and absorber area and is used to calculate radiation, conduction and convection losses.

**Cavity Absorptance**
  The ratio of energy absorbed by the cavity wall to radiation reaching it. Used to calculated reflected radiation losses.

**Cavity Surface Area (m****\ :sup:`2`\****)**
  Area of the cavity wall surface. Used to calculate the internal cavity area.

**Internal diameter of the Cavity Perp. to Aperture (m)**
  Average diameter of the cavity perpendicular to the receiver aperture. Used to calculate the internal cavity area.

**Internal Cavity Pressure with Aperture covered (kPa)**
  Applies only to receivers with a cover. Used to calculate convection losses.

**Internal Depth of the Cavity Perpendicular to the Aperture (m)**
  Equivalent to the cavity's characteristic length, which is used to calculate convection losses.

.. _dish_receiverdefaults:

Default Parameter Values
~~~~~~~~~~~~~~~~~~~~~~~~
Table . Receiver default parameter values... list-table::
   :width: 100%
   :align: center
   :header-rows: 1

   * - Variable
     - SES
     - WGA
     - SBP
     - SAIC
   * - Absorber Absorptance
     - 0.90
     - 0.90
     - 0.90
     - 0.90
   * - Absorber Surface Area
     - 0.6
     - 0.15
     - 0.15
     - 0.8
   * - Cavity Wall Absorptance
     - 0.6
     - 0.6
     - 0.6
     - 0.6
   * - Cavity Wall Surface Area
     - 0.6
     - 0.15
     - 0.15
     - 0.8
   * - Internal Diameter of the Cavity Perpendicular to the Receiver Aperture
     - 0.46
     - 0.35
     - 0.37
     - 0.5
   * - Internal Depth of the Cavity Perpendicular to the Aperture
     - 0.46
     - 0.35
     - 0.37
     - 0.5
   * - Receiver Insulation Thickness
     - 0.075
     - 0.075
     - 0.075
     - 0.075
   * - Insulation Thermal Conductivity
     - 0.06
     - 0.06
     - 0.06
     - 0.06
   * - Delta Temp. for DIR Receiver
     - 90
     - 70
     - 70
     - 90