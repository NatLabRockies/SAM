AC Degradation
==============

The AC Degradation inputs allow you to model a decline in the system's AC electrical output over time due, for example, to aging of equipment.


 
.. note:: When you specify degradation in each year, SAM ignores the value you specify for Year 1 (Row 1 of the input table) because it assumes degradation applies in Years 2 and later.


.. note:: For systems with battery storage, the battery's degradation depends on the inputs on the :doc:`Battery Life <../battery-storage/battery_life>` page. For systems with fuel cells, the fuel cell degradation inputs are on the :doc:`Fuel Cell <../fuel-cell/fuelcell_fuel_cell>` page.

Annual Degradation for Single-year Simulation
.............................................

**Annual AC degradation rate**
  The annual reduction in the system's AC output as a percentage of the system's total annual AC output.

.. _degac-valueschedule:

Value and Schedule Mode
~~~~~~~~~~~~~~~~~~~~~~~

Value Mode: Fixed Degradation Rate
..................................

For most situations where you want to model an annual reduction in the system's output, you can use a single annual degradation rate that applies to all years of the project cash flow. SAM applies the percentage to the system's total annual electrical output value in years 2 and later.

For example, for performance models other than the Detailed Photovoltaic and PVWatts models, a degradation rate of 1% for a system with a net annual output of 100,000 kWh in Year one results in annual output values of 100,000 kWh in year 1, 99,000 kWh in year 2, 98,010 kWh in year 3, 97,029.9 kWh in year 4, etc.

Schedule Mode: Annual Degradation Rates
.......................................

In some situations, you may want to assign a different degradation rate to different years of the project cash flow. To do that, you use the annual schedule option to specify a table of degradation rate values. In Schedule mode, SAM applies the degradation rate for a given year to the annual output in Year one to calculate the annual output for that year.

.. note:: For example, for a system with a Year 1 output of 10,000 kWh, if you specify a degradation rate of 0.5% for Year 5, SAM would calculate the annual output in Year 5 as follows: 10,000 kWh × (1 - 0.005) = 9,950 kWh.

.. note:: Because Year 1 is the first year of operation before degradation begins, you should set the degradation rate for Year 1 (the first row in the degradation table) to zero.

To enter an annual schedule of degradation rates:

.. include:: ../includes/snip_annual_values.rst

