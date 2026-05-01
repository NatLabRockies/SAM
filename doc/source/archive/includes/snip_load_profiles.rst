
If you do not have a complete 8,760 set of load data, you can use a set of daily load profiles for each month, and use SAM to create a set of 8,760 values.

To create a load data set using daily load profiles:

#. On the Electric Load page, click **Edit**.

#. In the Edit Hourly Data window, check **Use monthly grid to generate 8760 data**.

#. For each month of the year, define a daily load profile by typing a kilowatt electric demand for each of the 24 hours of the day. The first column represents the first hour of the day, beginning at midnight and ending at 1:00 a.m.

If you want to specify separate load profiles for weekdays and weekends, click Weekend Values to define profiles that apply to two days each week. SAM arbitrarily assumes that the first day in the data set is a Monday, and that weekends fall on Saturday and Sunday.

If you do not specify separate weekend profiles, SAM applies the weekday profile to all days of the week.

#. When you have specified all of the daily load profiles, click **To 8760** to transfer the data to the User Specified data table. You must complete this step for SAM to use the profile data in simulations.

When you define a load with daily load profiles, SAM assumes that all days in a given month have identical load profiles.

#. If you want to export the 8,760 data to a text file, click **Save**. You can also copy the data to a spreadsheet or other file by clicking **Copy**, and then pasting the data in to the file.