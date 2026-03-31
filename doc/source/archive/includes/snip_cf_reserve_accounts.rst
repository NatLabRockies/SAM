
Reserve accounts include debt service, working capital reserve, and major equipment replacement reserves. The reserve account amounts depend on the following inputs from the Financial Parameters page:

* Inflation Rate

* Debt Service Reserve Account (months P&I)

* Working Capital Reserve Months of Operating Costs

* Major Equipment Replacement Reserve Account [1-3] Frequency (years)

* Major Equipment Replacement [1-3] (Year 1 $)

**Lease Payment Reserve (Sale Leaseback only)**
*Lease Payment Reserve = Tax Investor (Lessor) Required Lease Payment Reserve (months) ÷ 12 × Total Developer Pre-tax Cash Flow from Operating Activities in Year n+1*

**Debt Service Reserve**
  The debt service reserve applies in Year Zero and later:

*Debt Service Reserve = Debt Service Reserve Account (months P&I) ÷ 12 × Total P&I in Year n+1*

  Where *Debt Service Reserve Account (months P&I)*   is from the Financial Parameters page, and *Total P&I in Year n+1*   is described under Debt above.

**Working Capital Reserve**
  Working capital reserve applies in Year Zero and later:

*Working Capital Reserve = Months of Operating Costs × Operating Expenses in Year n+1*

  Where *Months of Operating Costs*   is from the Financial Parameters page, and *Operating Expenses in Year n+1*   is described above.

**Major Equipment Replacement Reserves**
  You can specify up to three major equipment reserve accounts on the Financial Parameters page. For each account, the amount applies in Year One and later of the cash flow:

*Major Equipment Reserve in Year n = Major Equipment Reserve in Year n-1 + Funding + Release of Funds*

  Where Major Equipment Reserve in Year Zero = 0, and:

*Funding = Release of Funds in Year of Next Replacement ÷ Replacement Frequency*

*Release of Funds in Year of Next Replacement = - Replacement Cost in Year One $ × (1 + Inflation Rate)^(n-1)*

  Where *Replacement Frequency*, *Replacement Cost in Year One $*, and *Inflation Rate*   are from the Financial Parameters page