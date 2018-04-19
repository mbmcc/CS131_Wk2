// hardware invoice to test Invoice.h
// including the Invoice.h class

#include <iostream>
#include "Invoice.h" 

using namespace std;

//begin execution
int main()
{
	//invoice object contains : 
	//getPartNumber, getPartDescription, getPartQuantaty, getPartPrice
  
  Invoice::Invoice( 1001, "5x5 printed circuit card", 7, 15 );

  cout << "The part number is: " << Invoice.getPartNumber() << "\n"\
       << "The description is: " << Invoice.getPartDescription() << "\n"\
       << "The quantity is: " << Invoice.getPartQuantaty() << "\n"\
       << "The price per unit is: " << Invoice.getPartPrice() << "\n"\
       << "The total cost is: " << Invoice.getInvoiceAmount() << "\n"\
       ;

}

