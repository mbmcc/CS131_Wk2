Main function



#include <iostream>

#include <string>

#include "Atefeh.h"

using namespace std;

int main()

{

Invoice invoice1(1, "first invoice", 20, 10);

cout << "Invoice amount for " << invoice1.getPartDescription() << ", which is " << invoice1.getPartQuantaty() << " parts " <<

invoice1.getPartPrice() << " each is " << invoice1.getInvoiceAmount()<< endl;

system("pause");

}
