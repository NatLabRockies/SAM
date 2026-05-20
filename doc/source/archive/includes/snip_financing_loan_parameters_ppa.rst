
**Debt Percent**
  Percentage of the total installed cost to be borrowed.

  For example, specifying a debt percent of 25% means that the project borrows 25% of the Total Installed Cost amount shown on the Installation Costs page for a 25/75 debt-equity ratio.

.. note:: For projects with Independent Power Producer or Commercial PPA financing, if you check **Allow SAM to pick a debt percent to minimize the LCOE** under **Specify IRR Target**, SAM disables the Debt Percent input variable.

**Loan Term**
  Number of years required to repay a loan. Note that this value is different than the analysis period.

**Loan Rate**
  Annual loan interest rate.

**Installed Cost**
  The Total Installed Cost from the Installation Costs page.

**Construction Financing Cost**
  The Total Construction Financing Cost that you specify under **Construction Period**.

**Principal Amount**
  The loan principal amount.

  This is a calculated value and cannot be edited. To change the value, either change the value of the debt percent, or change the value of cost variables on the Installation Costs page.

*Principal Amount ($) = ( Total Installed Cost ($) + Construction Financing Cost ($) ) × Debt Percent (%)*

.. note:: The Principal Amount is different from the Debt Balance in Year One reported in the :doc:`cash flow <../results/cashflow>` when your analysis includes either investment-based or capacity-based incentives: The principal amount does not account for incentives because the total incentive amounts are not available until after you run a simulation.

**WACC**
  The Weighted Average Cost of Capital (WACC) is an estimated value representing the weighted average cost of the project's after-tax equity and debt capital. SAM calculates the WACC using the minimum required IRR value that you specify under **Specify IRR Target**.

  SAM displays the WACC for reference and does not use it for calculations. It is based on the target IRR you specify as an input, not the :doc:`actual IRR <../financial-metrics/mtf_irr>`   that SAM calculates as a result from the project cash flows.

  The WACC is a calculated value that you cannot directly edit. To change its value, change one of the parameters described in the following equations:

*WACC = Minimum Required IRR × (100% - Debt Percent) + (100% - Effective Tax Rate) × Loan Rate × Debt Percent*

  Where *Minimum Required IRR*   is the value you choose under **Specify IRR Target**. If you choose **Specify PPA Price**, SAM uses the **Minimum Required IRR** value visible in the inactive variable for the WACC calculation.

*Effective Tax Rate*   is a single number that includes both the federal income tax rate and state income tax rate:

*Effective Tax Rate = Federal Tax Rate × (100% - State Tax Rate) + State Tax Rate*

.. note:: The WACC is a value that represents the project's after-tax cost of equity and debt, and can be calculated before you know the project cash flows. The IRR is the discount rate that results a net present value (NPV) of zero for after-tax project cash flows. SAM shows you the WACC on the Financial Parameters page for reference, as a value that assumes that the IRR target you specify can be met. SAM calculates the actual IRR during the simulation, and displays it in the :doc:`Metrics table <../results/summary>` on the :doc:`Results <../getting-started/results_page>` page.