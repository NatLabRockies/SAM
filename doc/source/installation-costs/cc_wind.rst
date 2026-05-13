Wind Installation costs
=======================

The Wind Installation costs page allows you to specify the costs of a wind power project. For information about sources of wind cost data, see https://sam.nlr.gov/wind.html.

.. include:: ../includes/snip_installation_costs.rst

Capital Cost Models
~~~~~~~~~~~~~~~~~~~

The capital cost models are implementations of NLR cost models that you can use to estimate turbine and balance-of-system (BOS) costs.

**Land-based installation**
  Choose this option to apply capital costs from NLR cost models for land-based wind farms.

**Offshore installation**
  Choose this option to use default values for offshore wind farms.

**Estimate turbine costs now**
  Replace the **Turbine cost** "cost per kW" value with a value from the NLR cost models, and set the "cost per turbine" and "fixed cost" values to zero. The cost estimates include sales tax, so this also sets the sales tax basis to zero.

**Go to balance-of-system (BOS) cost model inputs**
  Click this button to show the inputs for either the land-based or offshore BOS cost models. To apply a BOS cost from one of the BOS, first populate the inputs for either the land-based or offshore BOS model, and then click **Apply BOS Estimate** to apply the value. 

* :ref:`Land Based Balance of System Cost model <landbosmodel>`


* :ref:`Offshore Balace of System Cost model <offshorebos>`


Capital costs
~~~~~~~~~~~~~

A capital cost represents an expense for a specific piece of equipment or installation service that applies in year zero of the cash flow.

.. note:: Because SAM uses only the total installed cost value in cash flow calculations, how you distribute costs among the different direct capital cost categories does not affect the final results.

For each direct cost category, you can specify the cost in $/kW of wind farm capacity, a fixed cost in $, or a cost per turbine in $/turbine. If you specify more than one cost, for example a foundation cost in both $/kW and $/turbine, SAM adds the values together to calculate the total category cost.

**Turbine Cost**
  The cost of a single turbine. You can type values in $/kW, $/turbine, fixed amount, or a combination of the three. The total turbine cost is the sum of three values.

**Balance of System cost**
  Material, labor, and other costs associated with building turbine foundations for the entire wind farm. You can type values in $/kW, $/turbine, fixed amount, or a combination of the three. The total turbine cost is the sum of three values.

**Wind farm capacity**
  The wind farm's nameplate capacity from the :doc:`Wind Farm <../wind-power/wind_farm>`   page.

**Number of turbines**
  The number of turbines in the project from the :doc:`Wind Farm <../wind-power/wind_farm>`   page.

**Sales tax basis, %**
  The percentage of total direct cost used to the calculate sales tax amount.

  SAM calculates the total sales tax amount by multiplying the sales tax rate from the :doc:`Financial Parameters <../financial-parameters/fin_overview>`   page by the sales tax basis on the Installation costs page: 

*Total Sales Tax ($) = Sales Tax Rate (%) × Sales Tax Basis (%) × Total Direct Cost ($)*

  For an explanation of the effect of sales tax on income tax, see **Sales Tax** on the :doc:`Financial Parameters <../financial-parameters/fin_overview>`   topic for the financial model you are using (Residential, Commercial, Single Owner, etc.).

**Total installed cost**
  The sum of the total turbine cost and total balance-of-system cost.

**Total installed cost per kW**
  The total installed cost divided by the wind farm nameplate capacity.

.. _landbosmodel:

Land-Based Balance of System Cost LandBOSSE Model
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
The Land-Based Balance of System cost model is an implementation of NLR's LandBOSSE model costs inputs apply only when you choose the **Land-based installation** option under **Capital Cost Models**. SAM applies the results of the BOS cost model to the **Balance of System Cost** input when you click **Apply BOS Estimate**.

For information and references about the NLR LandBOSSE model in SAM, see the "Wind Cost Data" section of the `Wind page on the SAM website <https://sam.nlr.gov/wind.html>`__. Those materials include:

* Eberle, A.; Roberts, O.; Key, A.; Bhaskar, P.; Dykes, K. (2019) NLR's Balance-of-System Cost Model for Land-Based Wind. National Renewable Energy Laboratory. 62 pp. NREL/TP-6A20-72201. (`PDF 3.0 MB <https://www.nlr.gov/docs/fy19osti/72201.pdf>`__)

* LandBOSSE in SAM (Tutorial/Documentation). Description of the LandBOSSE implementation in SAM. (`PDF 603 KB <https://sam.nlr.gov/images/web_page_files/sam-wind-landbosse-tutorial-nov-2020.pdf>`__)

* `LandBOSSE source code on GitHub <https://github.com/wisdem/landbosse>`__.

.. note:: The LandBOSSE cost model runs separately from the SAM simulation. The cost model calculates a cost estimate that you can use for SAM's balance-of-system cost input in the Capital costs section at the top of the Installation costs page. The SAM simulation uses the value of that input in the financial model's cash flow calculations.

Enable LandBOSSE Model
~~~~~~~~~~~~~~~~~~~~~~

The first time you check Enable Land-Based Balance of System Cost Model, SAM installs the NREL LandBOSSE BOS cost model. Once the cost model is installed, when you check the box, SAM enables the BOS model inputs.

.. note:: It may take a few minutes to install the LandBOSSE model. After the model is installed, it takes a few moments to run, so be prepared to wait after clicking **Enable Land-Based Balance of System Cost Model**, **Calculate BOS**, or **Apply BOS Estimate**.

Balance of System Model Inputs
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

To enable these inputs, click **Enable Land-Based Balance of System Cost Model**.

* For a detailed description of these inputs and instructions for using the LandBOSSE model, see "LandBOSSE in SAM (Tutorial/Documentation)", a description of the LandBOSSE model implementation in SAM. (`PDF 603 KB <https://sam.nlr.gov/images/web_page_files/sam-wind-landbosse-tutorial-nov-2020.pdf>`__)

**Interconnect voltage, kV**
  The voltage at the interconnection point between the project substation and the interconnecting utility substation.

**Distance to interconnect, miles**
  The distance between the substation and point of interconnection with the grid.

**Turbine foundation depth, m**
  The depth of the turbine foundation. The LandBOSSE model uses costs for a shallow spread-foot foundation design.

**Turbine rated thrust, N**
  The maximum force experienced by the wind turbine under extreme conditions. This affects the foundation cost.

**Labor cost multiplier**
  Multiplier for all labor costs in the model.

**50-year gust velocity, m/s**
  Wind velocity for the extreme 50-year wind gust at the project site.

**Calculate BOS**
  After you have entered values for the model inputs, click **Calculate BOS** to run the model and calculate a balance-of-system cost estimate. It may take a few moments for the model to run. When the model finishes, it populates values under **Balance of System Model Results** and **Balance of System Model Detailed Results**.

  If you want to use the calculated cost estimate for your SAM simulation, click **Apply BOS estimate**.

Balance of System Model Results
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

After you click **Calculate BOS**, when the LandBOSSE model finishes running, it displays the total BOS cost estimate along with cost details from the model.

**Total BOS Cost Estimate, $**
  The total balance-of-system cost estimate calculated by the LandBOSSE model.

**BOS Cost Estimate per kW**
  The cost estimate in dollars per kW of nameplate capacity. When you click **Apply BOS Estimate**, SAM copies this value to the balance-of-system cost input under Capital costs  .

**Apply BOS Estimate**
  Click to replace the balance-of-system "cost per kW" SAM cost input under **Capital costs** with the BOS cost estimate calculated by the LandBOSSE model. This sets the balance-of-system "cost per turbine" and "fixed cost" to zero.

**Rock Trenching Required**
  The percentage of total gravel/rock thermal backfill required to optimize soil thermal resistivity for collector cabling.

**Contingency**
  A percentage of the BOS total costs set aside for unexpected costs that occur during the construction period.

**Warranty Management**
  The cost of personnel to manage contracts during the warranty period and make any required claims as a percentage of the total balance-of-system costs.

**Sales and Use Tax**
  Taxes on projects vary dramatically by counties and states, with some having Renewable Energy Zones without taxes.

**Overhead**
  Percentage of the project budget for overhead costs such as administration, trailer rental, utilities, etc.

**Profit Margin**
  Percentage of the BOS project that is being considered as the project profit margin for the BOS activities.

**Development Fee**
  This is the accumulation of different costs of developing a project such as real estate, wind resource study, interconnection costs, environmental and permitting, etc. This could also include project profits created by the sale of the project from one developer to another developer.

Balance of System Detailed Results
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

The detailed results shows the cost breakdown of results from the LandBOSSE model. For details, see "LandBOSSE in SAM (Tutorial/Documentation)", a description of the LandBOSSE model implementation in SAM. (`PDF 603 KB <https://sam.nlr.gov/images/web_page_files/sam-wind-landbosse-tutorial-nov-2020.pdf>`__).

.. _offshorebos:

Offshore Balance of System Cost Model
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
The offshore balance-of-system cost model is for a wind farm installed offshore, in a body of water such as coastal ocean waters or lake. The model calculates a value for the **Balance of System** cost input in $/kW based on the data you provide for the detailed costs.

For a description of the model and its inputs, see Maness, M.; Maples, B.; Smith, A.; NREL Offshore Balance-of-System Model. National Renewable Energy Laboratory, NREL/TP-6A20-66874. (`PDF 4.7 MB <https://docs.nlr.gov/docs/fy17osti/66874.pdf>`__).

After you specify values for the detailed inputs, click **Apply BOS Estimate** to calculate the BOS cost and automatically apply it to the **Balance of System Cost**.