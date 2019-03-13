#include <iostream>

using namespace std; // String input value wouldn't work without this; had to look this up, then trial and error

// Main funciton to be executed
int main() {
  
  // Hanlde obtaining dog's age
  int dog_age;
  std::cout << "How old is your dog: ";
  std::cin >> dog_age;
  
  
  // Declaring variables to be used 
  int early_years;
  int later_years;
  double human_years;
  
  
  // Handle obtaining dog's name
  string dog_name;
  std::cout << "What is your dog's name: ";
  std::cin >> dog_name;
  
  
  // First two years of a dog's life amount to 21 human years
  early_years = 21;
  
  
  // Conditional looping; start by testing 2 & under
  if (dog_age <= 2) 
  {
  
    if (dog_age == 2) 
    {
      human_years = 21;
    } 
    else if (dog_age == 1) 
    {
      human_years = 10.5;
    }
    
  }
  
  // Conditional looping for over 2 years of age
  else if (dog_age > 2) 
  {
    
    // Calculate for "later_years"
    later_years = (dog_age - 2) * 4;

    // Add the early years and later years values
    human_years = early_years + later_years;

  }
     
  // Output displaying obtained information 
  std::cout << "My name is " << dog_name << "! Ruff ruff, I am " << human_years << " years old in human years.\n";
  
}
