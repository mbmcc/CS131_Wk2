#ifndef Atefeh_H
#define Atefeh_H
// Atefeh.h
// Class definition separate from the main

#include <iostream>

#include <string>

// Invoice class definition // Item (1)

class Invoice {

//Empty functaion

// Class functions // Item (3)

public:

//constructor // Item (2)

Invoice(int number, std::string description, int qty, int price)

{ //Do stuff constructor functions

setPartNumber(number);

setPartDescription(description);

setPartQuantaty(qty);

setPartPrice(price);

};

// Member function definitions

//

// setPartNumber

void setPartNumber(int number)

{

partNumber = number; //store number in partNumber

}

// getPartNumber

int getPartNumber() const

{

return partNumber; //display part number

}

// setPartDescription

void setPartDescription(std::string description)

{

partDescription = description; //store description in partDescription

}

// getPartDescription

std::string getPartDescription() const

{

return partDescription; //displays the part description std::string

}

// setpartQuantaty

void setPartQuantaty(int qty)

{

partQuantaty = qty; //store qty in partQuantaty

}

// getpartQuantaty

int getPartQuantaty() const

{

return partQuantaty; //display number of parts ordered

}

// setPartPrice

void setPartPrice(int price)

{

partPrice = price; //store price in partPrice

}

// getpartPrice

int getPartPrice() const

{

return partPrice;// dispaly part price

}

// Get Invoice amount // Item (4)

int getInvoiceAmount()

{

return partPrice * partQuantaty; //total price

}

private:

// variable definition

int partNumber;

std::string partDescription;

int partQuantaty;

int partPrice;

};

#endif