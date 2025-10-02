//Class: SDC255 - Agile and Scrum
//Name: Samantha Riser, Broc Salvati, Venisha Smith

#include <iostream>    //used for input/output
#include "calc_ops.h"  //links the function declaration in the other file; naming HAS to match completely

void performCalculation() {
  double number;    //this stores the variable user input

  std::cout << "Enter a number to square: ";
  std::cin >> number;    //takes input from console

  double result = number * number;  //this performs the calculation

  std::cout << "The square of " << number << " is: " << result << std::endl;
}
