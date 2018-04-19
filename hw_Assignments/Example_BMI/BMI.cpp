#include <iostream>
#include "BMI.h"

//Function Definitions of the BMI Class
//Default Constructor
BMI::BMI() { 
  newName;
  newHeight = 0;
  newWeight = 0.0;
}

//Overload Constructor
BMI::BMI(std::string name, int height, double weight) { 
  newName = name;
  newHeight = height;
  newWeight = weight;
}

//Destructor
BMI::~BMI() { 
  
}

// using accessor functions
std::string BMI::getName() const {
  return newName;
}

int BMI::getHeight() const {
  return newHeight;
}

double BMI::getWeight() const {
  return newWeight;
}

void BMI::setName(std::string name) {
  newName = name;
}

void BMI::setHeight(int height) {
  newHeight = height;
}

void BMI::setWeight(double weight) {
  newWeight = weight;
}

double BMI::calculateBMI() {
  return ((newWeight * 703) / (newHeight * newHeight));
}

 