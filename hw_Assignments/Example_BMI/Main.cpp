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
    cout << endl
    << "Patient Name: " << Student_1.getName() << "\n" 
    << "Patient Height: " << Student_1.getHeight() << "\n" 
    << "Patient Weight: " << Student_1.getWeight() << "\n" 
    << "Patient BMI: " << Student_1.calculateBMI() << "\n"
    << endl ;

  cout << endl;    

  cout << "Enter your name: ";
  cin >> name;
  cout << "Enter your height (in inches): ";
  cin >> height; 
  cout << "Enter your weight (in pounds): ";
  cin >> weight;

  BMI Student_2;
  //using the default constructor
    Student_2.setName(name);
    Student_2.setHeight(height);
    Student_2.setWeight(weight);
    
    cout << endl
    << "Patient Name: " << Student_2.getName() << "\n" 
    << "Patient Height: " << Student_2.getHeight() << "\n" 
    << "Patient Weight: " << Student_2.getWeight() << "\n" 
    << "Patient BMI: " << Student_2.calculateBMI() << "\n"
    << endl ;
        
  return 0;

}