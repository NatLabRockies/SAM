Parasitics
==========

The input variables on the Parasitics page are used to calculate the compression space temperature and the electrical power consumption of pumps, cooling fans, and tracking controls.

.. include:: ../includes/snip_dish_references.rst

* Section 2.5, p 55

* Section 3.4, p 92

* Appendix A, p 158

Parasitic Parameters
~~~~~~~~~~~~~~~~~~~~

**Control System Parasitic Power, Avg. (W)**
  Average power required by the tracking control system.

**Cooling System Pump Speed (rpm)**
  Cooling fluid pump operating speed. Used to calculated parasitic losses due to cooling fluid pumping.

**Cooling System Fan Speed 1 (rpm)**
  Fan operating speed when the cooling fluid temperature is less than the fan speed 2 cut-in temperature below.

**Cooling System Fan Speed 2 (rpm)**
  Fan operating speed when the cooling fluid temperature is greater than the fan speed 2 cut-in and less than fan speed 3 cut-in temperature below.

**Cooling System Fan Speed 3 (rpm)**
  Fan operating speed when the cooling fluid temperature is greater than fan speed 3 cut-in temperature below.

**Cooling Fluid Temp. for Fan Speed 2 Cut-In (°C)**
  Cooling fluid temperature set point. Used to determine fan operating speeds.

**Cooling Fluid Temp. for Fan Speed 3 Cut-In (°C)**
  Cooling fluid temperature set point. Used to determine fan operating speeds.

**Cooling Fluid Type**
  Fluid used in the cooling system. Options are water, 50% ethylene glycol (EG), 25% ethylene glycol, 40% propylene glycol (PG), and 40% propylene glycol. Percentages are by volume.

**Cooler Effectiveness**
  Used to calculate working fluid temperatures in the cooling system as part of the compression space temperature calculation.

**Radiator Effectiveness**
  Used to calculate cooling fluid temperature at the cooling system outlet as part of the compression space temperature calculation.