Stirling Engine
===============

The Stirling engine converts heat from the receiver's absorber to mechanical power that drives an electric generator.

.. include:: ../includes/snip_dish_references.rst

* Section 2.3, p 29

* Section 2.4, p 40

* Section 3.3, p 82

* Section 6, p 132

* Appendix A, p 156

The Stirling engine model is based on the Beale curve-fit equation with temperature correction described in Fraser (2008). The model calculates the average hourly engine power output in Watts as a function of the Beale curve-fit equation, pressure curve-fit equation, the engine displacement and operating speed, and expansion space (heater head) temperatures. The Beale curve-fit equation calculates the engine's gross output power as a function of the input power calculated by the collector and receiver models. SAM determines the compression space temperature from the ambient temperatures in the weather data file.

.. _dish_engineinputs:

Input Variable Reference
~~~~~~~~~~~~~~~~~~~~~~~~
Estimated Generation
~~~~~~~~~~~~~~~~~~~~

**Single Unit Nameplate Capacity (kW)**
  The nominal electrical power output of the engine-generator set for a single dish-Stirling unit. Used for capacity-related cost calculations.

Engine Parameters
~~~~~~~~~~~~~~~~~

**Heater Head Set Temperature (K)**
  Expansion space temperature set point.

**Heater Head Lowest Temperature**
  The expansion space temperature in an engine with multiple cylinders of the heater head with the lowest temperature. The heater head temperature is equivalent to the expansion space temperature.

**Engine Operating Speed (rpm)**
  The rotational speed of the engine drive shaft. Used to calculate the engine output power.

**Displaced Engine Volume (m****\ :sup:`3`\****)**
  The volume displaced by the pistons. Used to calculate the engine output power.

Beale Curve Fit Coefficients
~~~~~~~~~~~~~~~~~~~~~~~~~~~~

The Beale numbers are a set of coefficients for the Beale curve-fit equation that describes the engine's power output as a function of its input power and the engine pressure.

Pressure Curve Fit Coefficients
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

The pressure curve-fit equation expresses the engine pressure as a function of engine input power for a constant volume system.

.. _dish_enginedefaults:

Default Parameter Values
~~~~~~~~~~~~~~~~~~~~~~~~
Table . Stirling engine default parameter values.

The following parameter values are based on values developed for the model. The SBP and SAIC engines are not included in the SAM standard library and require a different set of equations (see Fraser 35).

.. list-table::
   :width: 100%
   :align: center
   :header-rows: 1

   * - Variable
     - SES
     - WGA
     - SBP
     - SAIC
   * - Heater Head Set Temperature
     - 993
     - 903
     - 903
     - 993
   * - Heater Head Lowest Temperature
     - 973
     - 903
     - 903
     - 973
   * - Engine Operating Speed
     - 1800
     - 1800
     - 1800
     - 2200
   * - Displaced Engine Volume
     - 3.80 × 10-4
     - 1.60 × 10-4
     - 1.60 × 10-4
     - 4.80 × 10-4
   * - Beale Constant Coefficient
     - 4.247 × 10-2
     - 8.50686 × 10-2
     - -1,82451 × 10-3
     - -1.6 × 10-2
   * - Beale First-order Coefficient
     - 1.682 × 10-5
     - 1.94116 × 10-5
     - 2.60289 × 10-5
     - 1.5 × 10-5
   * - Beale Second-order Coefficient
     - -5.105 × 10-10
     - -3.18449 × 10-10
     - -4.68164 × 10-10
     - -3.50 × 10-10
   * - Beale Third-order Coefficient
     - 7.07260 × 10-15
     - 0
     - 0
     - 3.85 × 10-15
   * - Beale Fourth-order Coefficient
     - -3.586 × 10-20
     - 0
     - 0
     - -1.6 × 10-20
   * - Pressure Constant Coefficient
     - 6.58769 × 10-1
     - -7.36342 × 10-1
     - -2.00284 × 10-2
     - 3.47944 × 10-5
   * - Pressure First-order Coefficient
     - 2.34963 × 10-4
     - 3.6416 × 10-4
     - 3.52522 × 10-4
     - 5.26329 × 10-9