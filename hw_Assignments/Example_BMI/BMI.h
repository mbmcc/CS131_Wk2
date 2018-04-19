#ifndef BMI_H
#define BMI_H
#include <iostream>

// Function Declarations of the BMI class
class BMI { 
	public:
	  // Default Constructor
	  BMI();
	  
	  // Overload Constructor
	  BMI(std::string, int, double);
	  
	  //Destructor
	  ~BMI();
	  
	  //Accessor functions 
	  std::string getName() const; // getName - returns name of patient
	  int getHeight() const;  // getHeight - returns height of patient 
	  double getWeight() const;  // getWeight - returns weight of patient 
	  
  private:
	  // Member variables
	  std::string newName;
	  int newHeight;
	  double newWeight;
  
};


#endif
