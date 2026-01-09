
The Depreciation options allow you to specify how SAM calculates depreciation amounts and to specify an optional bonus depreciation.

The depreciation basis is the **Total depreciation basis prior to allocation** output variable. It is the sum of the total installed cost and any financing costs that apply to the project, including debt-related costs, construction financing cost, and the cost of funding reserves.

The depreciation amount for each class is the product of the total depreciation basis prior to allocation and the allocation percentage for that class.

The sum of allocation percentages may be less than 100% to account for situations where the total depreciation basis prior to allocation includes non-depreciable assets or costs. In this case, the total amount allocated for depreciation is less than the total depreciation basis prior to allocation. See the **Gross Amount Allocated** column in the Depreciation and ITC table in the project :doc:`cash flow <../results/cashflow>`.

For projects with the Investment Tax Credit (ITC), when you check the **Reduces Depreciation Basis** check box for the ITC the :doc:`Incentives <../incentives-and-depreciation/incentives>` page, SAM reduces the depreciation basis by 50% of the ITC amount as required by U.S. Internal Revenue Service rules.

SAM makes the following simplifying assumptions:

* To represent depreciation of assets with different classes or service lives, you can specify an allocation percentage for up to six different depreciation methods.

* State and federal depreciation bases are the same, except for bonus depreciation.

* Investment-based incentives and capacity-based incentives reduce the depreciation basis proportionally.

**Depreciation Classes**
  Each row in the Depreciation Classes box represents a recovery period (5, 15, 20, or 39 years) and depreciation method (MACRS or Straight Line) based on the guidelines in the United States tax code. See U.S. Internal Revenue Service Publication 946 (https://www.irs.gov/pub/irs-pdf/p946.pdf) for details. 

  The following table shows the depreciation percentage by year for each depreciation class:

  .. image:: /images/TBL_DepreciationClasses.png
     :align: center
     :alt: TBL_DepreciationClasses.png

  Each depreciation class has an associated value or set of check boxes listed under Federal and State Allocations, Bonus Depreciation, and ITC Qualification.

  **Custom Depreciation Schedules**

  For projects outside of the U.S., or for analyses involving depreciation methods other than IRS methods, you can specify a custom depreciation schedule. To specify a custom depreciation schedule, click **Edit**, and enter a percentage for each year in the depreciation schedule table. (Enter values in the table as percentages, not decimals: For example type '25' for 25%.)

**Federal and State Allocations**
  For each depreciation class, specify an allocation. SAM assumes that the same depreciation method and allocations apply to both federal and state taxes.

  SAM assumes the half-year convention for all depreciation methods.

  To model a project with no depreciation, enter zero for all depreciation methods.

**Bonus Depreciation**
  The bonus depreciation applies in Year One as a percentage of the allocations that you specify for the standard depreciation.

  Specify a percentage and check the box for each depreciation allocation that qualifies for the bonus depreciation.

  For example, for a federal bonus depreciation that is 100% of the 5 yr MACRS depreciation class, if you specified the following depreciation allocations: 80% 5 yr MACRS, 1.5% 15 yr MACRS, and 3% 15 yr Straight Line, you would enter 100% for **Federal**, check the **5-yr MACRS** box, and clear the remaining boxes.

.. note:: The Tax Relief, Unemployment Insurance Reauthorization, and Jobs Creation Act of 2010 extended the bonus depreciation incentive through 2010. Projects placed in service in 2011 qualify for 100% bonus depreciation, while projects placed in service in 2012 qualify for 50% bonus depreciation. Note that these bonus depreciation provisions are temporary.

**ITC Qualification**
  Check the box for each depreciation allocation that qualifies for investment tax credits (ITC). For example, if you check the box for 5-yr MACRS, and the 5-yr MACRS allocation is 90%, then the ITC basis would be 90% of the total depreciation basis prior to allocation.