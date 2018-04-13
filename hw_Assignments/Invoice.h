#ifndef VARIABLE
#define VARIABLE
// Write your header file here.
#endif
*******************************************************************************/
/*  ###############  CS131_wk2_McCourry Invoice Class ##################
(1) Create a class called Invoice that a hardware store might use to represent an invoice
for an item sold at the store. An Invoice should include four data members—
 + a part number (type string), 
 + a part description  (type string), 
 + a quantity of the item being purchased ( type int) 
 + and a price per item (type int). 
(2) Your class should have a constructor that initializes the four data members. 
A constructor that receives multiple arguments is defined with the 
form: ClassName( TypeName1 parameterName1, TypeName2 parameterName2, ... ) 
(3) Provide a set and a get function for each data member.
(4) In addition, provide a member function named getInvoiceAmount that calculates 
the invoice amount (i. e., multiplies the quantity by the price per item), 
then returns the amount as an int value. 
If the quantity is not positive, 
 it should be set to 0. 
If the price per item is not positive, 
 it should be set to 0.
   ############################################################################
*/
// Invoice.h
// Class definition separate from the main
#include <iostream>
#include <string>
// Invoice class definition // Item (1)

class Invoice
{
  public
    //constructor
    : partNumber( number ), partDescription( description ), 
      partQuantaty( qty ), partPrice( price )// Item (2)
    {      //Do stuff constructor functions
    }
    // Class functions // Item (3)
    
    // setPartNumber
    // getPartNumber
    
    // setPartDescription
    // getPartDescription
    
    // setpartQuantaty
    // getpartQuantaty
    
    // setpartPrice
    // getpartPrice
    
    // Get Invoice amount // Item (4)
    int getInvoiceAmount(partPrice, partQuantaty)
    {
      
    }
  private
    // variable definition
};
