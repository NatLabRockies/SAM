Tax Credits and Depreciation
============================

A tax credit is an amount that is deducted from the project's income tax:

* :ref:`Investment tax credits <itc>` (ITC)

* :ref:`Production tax credits <ptc>` (PTC)

Production Tax Credit (PTC)
~~~~~~~~~~~~~~~~~~~~~~~~~~~

.. _ptc:

A production tax credit (PTC) reduces the project's annual tax liability in Year One of the cash flow and subsequent years up to and including the year specified in the term variable. The PTC is a dollar amount per unit of annual electric (or thermal) output. If you specify an escalation rate, SAM increases the annual tax credit amount in years 2 and later in the cash flow by a percentage of the previous year's credit amount.

To see the effect of the PTC on the :doc:`cash flow <../results/cashflow>`, for the Residential and Commercial financial models, see the federal and state income sections of the cash flow. For the Single Owner and other front-of-meter financial models, see the After-tax Returns section of the cash flow. For the calculated PTC amounts, see the Tax Credits section of the project cash flow.

**Amount, $/kWh ($/MMBtu for IPH)**
  The amount of the production tax credit as a function of the system's total electrical output in the first year expressed in dollars per kilowatt-hour of AC output. A zero indicates no tax credit.

**Term, years**
  The number of years, beginning with year 1 on the project cash flow, that the tax credit applies. For example, a credit with a 10-year term would apply to years 1 through 10 of the project cash flow. A zero indicates no tax credit.

**Escalation, %/year**
  The annual escalation rate that applies to the tax credit. SAM applies the escalation rate to years 2 and later of the project :doc:`cash flow <../results/cashflow>`  . SAM does not apply the inflation rate that you specify on the :doc:`Financial Parameters <../financial-parameters/fin_overview>`   page to the PTC. For example, for a tax credit with a ten year term and two percent escalation rate, the tax credit in year 2 would be 2% greater than in year 1, and in year 3, 2% greater than in year 2, and so on.

  For both the state and federal PTC, SAM rounds the annual PTC rate in cents/kWh to the nearest 0.1 cent as described in Notice 2010-37 of `IRS Bulletin 2010-18 <https://www.irs.gov/irb/2010-18_IRB/ar11.html>`__  .

Specifying Annual PTC Tax Credit Values
.......................................

For the PTC, you can specify the tax credit as either a single value (amount or percentage) that applies to all years in the analysis period defined on the Financial Parameters page, or you can assign a different value to each year in the analysis period using an annual schedule.

Dollar values in the annual schedule are in nominal or current dollars. SAM does not apply inflation or escalation rates to values in annual schedules.

By default, you enter the PTC as a single value. The blue "Value" label on the blue and gray button next to the input variable indicates the single value mode is active for the variable.

.. image:: ../images/SS_TaxCredit-PTCAnnSchedValue.png
   :align: center
   :alt: SS_TaxCredit-PTCAnnSchedValue.png

To specify a PTC using an annual schedule:

.. include:: ../includes/snip_annual_values.rst

Investment Tax Credit (ITC)
~~~~~~~~~~~~~~~~~~~~~~~~~~~

.. _itc:

An investment tax credit (ITC) reduces the project's annual tax liability, and is calculated based on the project's initial investment cost. SAM allows the ITC to be expressed either as a fixed amount or as a percentage of the project investment cost with a maximum limit.

To see the effect of the ITC on the :doc:`cash flow <../results/cashflow>`, for the Residential and Commercial financial models, see the federal and state income sections of the cash flow. For the Single Owner and other front-of-meter financial models, see the After-tax Returns section of the cash flow. For the calculated ITC amounts, see the Tax Credits section of the project cash flow.

**Amount, $**
  The fixed dollar amount of the tax credit. A value of zero indicates no tax credit.

**Percentage, %**
  The amount of the tax credit expressed as a percentage. A value of zero indicates no tax credit.

  For the residential and commercial models, SAM applies the ITC percentage to the total installed cost.

.. note:: If you want to model a situation where the percentage applies to a different value, you can either modify the ITC percentage accordingly, or calculate the ITC amount outside of SAM and enter it as a fixed amount. For example, for a project with a $10,000 cost where 95% of this cost is eligible for a 30% ITC, you could either enter an ITC percentage of 95% × 35% = 28.5%, or an ITC amount of 30% × 95% × $10,000 = $2,850.

For the PPA, Community Solar, Merchant Plant, and Third Party Ownership Host / Developer models, the ITC percentage applies to the portion of each depreciation class that you specify as qualifying for the ITC on the :doc:`Depreciation <depreciation>` page. See the ITC Qualifying costs column in the Depreciation and ITC table table in the project :doc:`cash flow <../results/cashflow>`. By default, the ITC percentage applies only to the basis for the portion of project costs that qualifies for 5-yr MACRS depreciation. For example, for a project with qualifying costs of $1,000,000, ITC percentage of 30%, and 90% of the depreciation basis qualifies for the ITC, the ITC amount would be $1,000,000 × 30% × 90% = $270,000.

**Maximum, $**
  The upper limit of the tax credit in dollars. For tax credits with no limits, type the value 1e+038.

**Reduces Depreciation Basis**
  Available for non-residential projects when one of the depreciation options is active on the :doc:`Depreciation <../financial-parameters/fin_residential>`   page. 

  The check boxes determine whether the basis used to calculate federal depreciation, state depreciation, or both should be reduced by the tax credit amount. When you check the box for an ITC, SAM reduces the depreciable basis by 50% of the ITC amount as specified by U.S. Internal Revenue Service rules.

Specifying Annual ITC Values
............................

You can specify ITC amounts and percentages either as a single value for an ITC that only applies in Year 1, or as annual values that applies over multiple years. By default, you enter the ITC amount or percentage as a single value. The blue "Value" label on the blue and gray button next to the input variable indicates the single value mode is active for the variable:

.. image:: ../images/SS_TaxCredit-PTCAnnSchedValue.png
   :align: center
   :alt: SS_TaxCredit-PTCAnnSchedValue.png

Dollar values in the annual schedule are in nominal or current dollars. SAM does not apply inflation and escalation rates to values in annual schedules.

If you specify an ITC as annual percentages with a single maximum value, the maximum value applies to all years.

To specify a ITC using an annual schedule:

.. include:: ../includes/snip_annual_values.rst

Depreciation for the Commercial Model
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
.. include:: ../includes/snip_financing_depreciation_basic.rst

Depreciation for PPA Financial Models
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
.. include:: ../includes/snip_financing_depreciation_adv.rst

