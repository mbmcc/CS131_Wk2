#ifndef BMI_H
#define BMI_H
#include <iostream>
#include <string>

using namespace std;

class BMI {
  public:
  // Default Constructor
  BMI();
  
  // Overload Constructor
  BMI(string, int, double);
  
  //Destructor
  ~BMI();
  
  private:
  // Member variables
  string newName;
  int newHeight;
  double newWeight;
  
};


#endif