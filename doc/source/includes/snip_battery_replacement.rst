
When you enable battery replacements, SAM determines when batteries need to be replaced based either on battery degradation as determined by the Battery Lifetime inputs or a fixed replacement schedule that you specify. It also calculates an annual replacement cost in the project cash flow based battery replacement cost on the :doc:`Operating Costs <../operating-costs/oc_battery>` page.

**No replacements**
  Use this option if you do not want to account for battery replacement costs, or if you want to account for them using one of the general cost categories on the :doc:`Operating Costs <../operating-costs/oc_battery>` page  .

  If you choose the No replacements option, SAM operates the system with no battery after the available storage capacity is depleted.

**Replace at specified capacity**
  Use this option if you want SAM to calculate the year(s) in which batteries are replaced based on degradation of the battery's capacity caused by battery cycling as determined from the **Battery Lifetime** parameters.

  Set **Battery bank replacement threshold** as percentage of the nominal battery capacity that triggers a replacement. When the battery's available capacity has degraded to this percentage, SAM replaces the battery and applies the battery replacement cost from the :doc:`Operating Costs <../operating-costs/oc_battery>` page   to the project :doc:`cash flow <../results/cashflow>`  . If you set the threshold to less than 2%, SAM sets the value internally to 2% to avoid simulation issues as the battery's available capacity approaches 0% of its original capacity.

**Replace at specified schedule**
  Use this option to specify the years when batteries are replaced and the percent of nominal battery capacity that is replaced in those years, regardless of the battery's degradation.

  Click **Edit array** to specify the percentage of total battery capacity to be replaced in each replacement year. In the Edit Array window, click **Number of values**, and enter the analysis period from the :doc:`Financial Parameters <../financial-parameters/fin_overview>`   input page. Then in the table, type a percentage for each year in which the batteries will be replaced. The rows for the remaining years should be zero.