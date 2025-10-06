//Class: SDC255 - Agile and Scrum
//Name: Samantha Riser, Broc Salvati

#include <iostream>   
#include "calc_ops.h"  

void performCalculation() {
  double number;   

  std::cout << "Enter a number to square: ";
  std::cin >> number;    

  double result = number * number; 

  std::cout << "The square of " << number << " is: " << result << std::endl;
}
