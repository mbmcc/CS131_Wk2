#include "BMI.h"
#include <iostream>
#include <string>
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
  
  BMI Student_1(name, height, weight); 
  //uses the overload constructor
  
  cout << endl <<
    "Patient name: " << Student_1.getName() << "\n" <<
    "Patient weight: " << Student_1.getWeight() << "\n" <<
    "Patient height: " << Student_1.getHeight() << "\n" <<
  endl;
       
  return 0;

}