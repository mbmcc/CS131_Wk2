#include <iostream>
#include <string>
#Include "BMI.h"
using namespace std;

int main() {
  
  string name;
  int height;
  double weight;
  
  cout << "Enter your name: ";
  cin >> name;
  cout << "Enter your height (in inches): ";
  cin >> height;
  cout << "Enter your weight (in pounds): ";
  cin >> weight;
  
  BMI Student_0; //automatically uses the default constructor in the header file
  BMI Student_1(name, height, weight); //uses the overload constructor
  
  return 0;

}
