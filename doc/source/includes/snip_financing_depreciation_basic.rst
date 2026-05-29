
The depreciation inputs represent the decrease in value of project assets over the analysis period. Depreciation reduces federal and state taxable income, shown under *Tax Effect on Equity* in the project :doc:`cash flow <../results/cashflow>`.

For the Commercial financial model, SAM assumes that the depreciation method you choose applies to the entire depreciable basis. For these projects, the depreciable basis in each year of the project cash flow is the total installed cost less any incentives you specify as reducing the depreciation basis on the :doc:`Incentives <../incentives-and-depreciation/cash_incentives>` page:

*Depreciable Basis = Total Installed Cost + Total Construction Financing Cost - ( Total ITC × 0.5 + Total IBI + Total CBI + Total PBI )*

Where *Total Installed Cost* is from the Installation Costs page, and *ITC* includes all tax credits that you specified on the Incentives page to reduce the depreciation basis, and *IBI*, *CBI*, and *PBI* include all incentives you specified to reduce the depreciation basis.

.. note:: After running a simulation, you can verify the depreciation percentages and amounts in the :doc:`cash flow <../results/cashflow>` in the rows under Tax Effect on Equity.

**No Depreciation**
  The project does not claim a depreciation tax deduction.

**5-yr MACRS**
  Modified Accelerated Cost Recovery System depreciation schedule offered by the Federal government and some states using a five-year life and half-year convention.

  This tax deduction, expressed as a percentage of the depreciable basis, applies to the first five years of the project life as follows: 20%, 32%, 19.2%, 11.52%, 11.52%, and 5.76%.

**Straight Line (specify years)**
  A depreciation schedule offered by the Federal government and some states.

  SAM calculates the depreciation percentage for the straight line depreciation option by dividing the analysis period by the number of years:

*SL Depreciation Percentage = Analysis Period (years) ÷ SL Number of Years (years) × 100%*

**Custom (specify percentages)**
  Allows you to assign a depreciation deduction as a percentage of the total installed cost for each year in the project life.

  To specify a custom depreciation schedule, click **Custom (specify percentages)**, and then click **Edit** to open the Edit Schedule Window. Each row in the table represents a year in the analysis period. For **# Values**, type a number equal to or greater than the analysis period. (SAM ignores any values you enter for years after the analysis period.) For each year in the table, type a percentage. SAM will calculate the depreciation amount for each year in the :doc:`cash flow <../results/cashflow>`   by multiplying the percentage you specify for that year by the depreciable basis described above.