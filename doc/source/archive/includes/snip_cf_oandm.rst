
  The annual operating costs are defined on the :doc:`Operating Costs <../operating-costs/oc_operating>`   page and may be calculated as a fixed amount, a cost per system rated capacity, a cost per unit of energy output, or any combination of the three:

*Fixed operating expense in Year n = Fixed Annual Cost ($/yr) × (1 + Inflation Rate + Escalation Rate) ^ n-1*

*Capacity-based operating expense in Year n = Fixed Cost by Capacity ($/kW-yr) × System Capacity * (1 + Inflation Rate + Escalation Rate)^(n-1)*

*Production-based operating expense in Year n = Variable Cost by Generation ($/MWh) / 1000 (kWh/MWh) × Energy in Year n (kWh) × (1 + Inflation Rate + Escalation Rate)^(n-1)*

Where   Fixed Annual Cost,   Fixed Cost by Capacity,   Variable Cost by Generation, and Escalation Rate are from the :doc:`Operating Costs <../operating-costs/oc_operating>`   page, and   Inflation Rate is from the :doc:`Financial Parameters <../financial-parameters/fin_overview>` page.

.. note:: When you specify operating costs using an annual schedule instead of a single value, SAM does not apply the inflation rate or escalation rate to the values you specify for each year.

.. include:: /includes/snip_system_capacity.rst

