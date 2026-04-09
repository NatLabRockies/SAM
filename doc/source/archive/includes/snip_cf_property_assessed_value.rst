
The property assessed value is the value SAM uses as a basis to calculate the annual property tax payment:

*Property Assessed Value in Year One = Assessed Value*

Where *Assessed Value* is from the :doc:`Financial Parameters <../financial-parameters/fin_overview>` page.

In Years 2 and later, the property assessed value is the Year One value adjusted by the assessed value decline value from the Financial Parameters page:

*Property Assessed Value in Year n>1 = Assessed Value in Year One × [1 - Assessed Value Decline × (n-1)]*

Where *Assessed Value Decline* is from the Financial Parameters page, expressed as a fraction instead of a percentage.

If the value of *1 - Assessed Value Decline × (n-1)* for a given year is equal to zero or less, then the *Property Assessed Value* in that year is zero.