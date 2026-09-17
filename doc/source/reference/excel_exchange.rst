Excel Exchange
==============

Excel Exchange allows you to link any input variable in SAM to a cell or range of cells in a Microsoft Excel workbook. This feature allows you to use an external spreadsheet-based model to generate values for SAM input variables. SAM can both import variable values from an Excel worksheet and export variable values to the worksheet.

Using Excel Exchange involves the following steps:

* Prepare an Excel workbook for the data exchange.

* In SAM, configure and turn on Excel Exchange in the :doc:`../window-reference/win_excel_exchange` Window.

* In SAM, :doc:`run a simulation <../getting-started/run_simulations>`. SAM exchanges data with the Excel workbook during the simulation. 

For an example of SAM with Excel Exchange, download the files `excel-exchange-example.sam`` and `excel-exchange-example.xlsx`` from the `Sample Files collection <https://github.com/NatLabRockies/SAM/tree/develop/samples>`__ in the SAM GitHub repository. To run it, place both files in the same folder on your computer, open the SAM file, and run a simulation.

.. note:: Excel Exchange is designed to allow you to read values of SAM *input* variables from an Excel workbook. *You cannot use Excel Exchange to write values of SAM results to a workbook.* If you want to export results to Excel, you can use one of the options described in :doc:`Export Data and Graphs <export_data>`, or you can write a :doc:`script <lk_script>` to export SAM results.

   Excel Exchange works in the Windows version of SAM and requires that Microsoft Excel be installed on your computer. It will not work with other spreadsheet software or in the Mac or Linux versions of SAM.

   When SAM runs with Excel Exchange turned on, it exchanges data with a copy of the Excel file in computer memory that you cannot see. It does not modify the file stored on your computer's disk, so you will not see any changes in the workbook values.

   If the Excel workbook contains more than one worksheet, SAM can only exchange data with the first worksheet (the worksheet whose tab appears on the leftmost tab).

**To prepare an Excel workbook for Excel Exchange:**

1. Create an Excel workbook with the calculations you want to perform in Excel. Use the first worksheet in the workbook for the data exchange.

2. Identify the cells or cell ranges you plan to use for the data exchange. You can refer to them using either ranges (module_cost, NameplateCapacity, etc.) or cell references (A1, C15, etc.).

   For SAM input variables with multiple values specified in SAM using an :doc:`annual schedule <../window-reference/win_edit_data_table_column>`, use the cell reference notation (A1:A12, B15:G15, etc.) rather than a named range. 

**To configure and turn on Excel Exchange:**

1. Create or open the SAM file you want to configure for Excel Exchange to open the :doc:`../window-reference/win_excel_exchange` Window.

2. Save the file.

3. On the :doc:`case menu <case_menu>`, click **Excel Exchange**.

  .. image:: ../images/SS_CaseMenu-ExcelExchange.png
     :align: center
     :alt: SS_CaseMenu-ExcelExchange.png

4. In the Excel Exchange Window, check **Turn on Excel Exchange for the base case simulation** to active Excel Exchange. You can clear the check box to keep the Excel Exchange configuration without running the Exchange when you run a simulation.

5. For **Excel file**, click the |SS_Button-Ellipses| browse button and choose the Excel file you want to use for the exchange. You can remove the file path if you plan to keep the Excel and SAM files in the same folder.

6. In the **Variables** list, add the SAM variables you want to use for the data exchange: Click **Add** to open the input variable browser.

7. For each variable in the list, click its name, and

  For **Excel range**, type either the cell reference (A1, C10, etc.) or range name (module_cost, NameplateCapacity, etc.) of the workbook cell or range associated with the SAM variable. Do not enclose the references or names in quotes.

  Click **Send variable value to Excel** if you want to send that variable's value to the Excel workbook, or **Capture variable value from Excel** if you want to read that variable's value from the Excel workbook.

8. Click **OK**.

9. Click **Simulate** to run a simulation with Excel Exchange.
