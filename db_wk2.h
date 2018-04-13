// Example Class 
class ExampleClass
{
public:			//The parts of the class that the rest of the program can see
  explicit ExampleClass (string name)	//initializing our exampleName with a constructor
  :exampleName (name)		// comma separated list, exampleName set to parameter name (not the same "name" as used below)
  {//empty body of constructor
  } // End of the constructor
  
  void setExampleName (string name)	// The function that we can call to set the exampleName object (no return)
  {				// The start of set name function
    exampleName = name;		// Set the exampleName object to the name parameter variable from this function
  }				// End of the set name function

  string getExampleName () const	//The object that we call to return the value of the name variable
  {				// The start of the get name function
    return exampleName;		// returns the value that was set into the exampleName object
  }				// The end of the get name function

private:			// The parts of the class that are not visible outside of the class
    string exampleName;		//Establishing the exampleName object variable as a string, to be used in the public part of the class

};				// End of Class ExampleClass
