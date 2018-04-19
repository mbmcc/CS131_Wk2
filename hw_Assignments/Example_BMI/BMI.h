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
	    // getName - returns name of patient
	    std::string getName() const; 
	  
	    // getHeight - returns height of patient 
	    int getHeight() const;  
	    
	    // getWeight - returns weight of patient 
	    double getWeight() const;  
	  
	  //Mutator functions
	    // Set name of patient
	    // @param string - name of patient
	    void setName(std::string);
	  
	    // Set height of patient
	    // @param height - height of patient
	    void setHeight(int);
	    
	    // Set height of patient
	    // @param weight - weight of patient
	    void setWeight(double);	  
	  
	    //calculate BMI
	    //@return BMI of student
	    double calculateBMI();
	  
  private:
	  // Member variables
	  std::string newName;
	  int newHeight;
	  double newWeight;
  
};


#endif
