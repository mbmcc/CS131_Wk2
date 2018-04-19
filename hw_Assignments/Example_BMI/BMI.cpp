#include <iostream>
#include "BMI.h"

//Function Definitions ot the BMI Class
BMI::BMI (){ //Default
  newName = 0;
  newHeight = 0.0;
  newWeight;
}

BMI::BMI(string name, int height, double weight) { //Overload
  newName = name;
  newHeight = height;
  newWeight = weight;
}

BMI::~BMI() { //Destructor
  
}