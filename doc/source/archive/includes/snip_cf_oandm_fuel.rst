
  The following performance models include a fuel cost calculation:

* CSP systems with fossil backup

* Fuel cell

* Custom generation profile for the primary fuel cost

* Biomass Power for biomass and supplementary coal feedstock costs

.. note:: For the CSP systems listed above, SAM only considers the system to have a fossil-fired backup boiler when the fossil fill fraction variable on the Thermal Storage page is greater than zero.

For the models listed above that consume a fuel, Fuel Cost is the annual fuel cost:

*Fuel Costs in Year n = Annual Fuel Usage in Year One (kWh) × 0.003413 MMBtu per kWh × Fossil Fuel Cost ($/MMBtu) × (1 + Inflation Rate + Escalation Rate)^(n-1)*

Where *Annual Fuel Usage in Year One* is the quantity of fuel consumed in Year One calculated by the performance model. *Fossil Fuel Cost* and *Escalation Rate* are from the :doc:`Operating Costs <../operating-costs/oc_operating>`   page, and Inflation Rate is from the :doc:`Financial Parameters <../financial-parameters/fin_overview>` page.

.. note:: When you specify fuel costs using an annual schedule instead of a single value, SAM does not apply the inflation rate or escalation rate to the values you specify for each year.

For the :doc:`biomass power <../biopower/biopower>` model, SAM calculates feedstock and coal costs using feedstock usage and price values from the  :doc:`Feedstock Costs <../biopower/biopower_feedstock_costs>` page:

*Biomass Feedstock Costs in Year n = Total Biomass Fuel Usage in Year One (dry tons/year) × Biomass Fuel Cost ($/dry ton) × (1 + Inflation Rate + Escalation Rate)^(n-1)*

*Coal Feedstock Costs in Year n = Total Coal Fuel Usage in Year One (dry tons/year) × Coal Fuel Cost ($/dry ton) × (1 + Inflation Rate + Escalation Rate)^(n-1)*

Where the fuel usage and fuel costs are from the :doc:`Feedstock Costs <../biopower/biopower_feedstock_costs>` page, and *Inflation Rate* and *Escalation Rate* are from the :doc:`Financial Parameters <../financial-parameters/fin_overview>` page.