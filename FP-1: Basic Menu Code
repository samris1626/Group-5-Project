//Class: SDC255 - Agile and Scrum
//Name: Samantha Riser, Broc Salvati, Venisha Smith

#include <iostream>	//for input/output on console
#include <limits>	//these limit the dependencies; there are no extra functions or files to worry about
#include <stdio.h>
#include "file_ops.h"	//include for read/write functions
#include "calc_ops.h"	//include for calculation


int main() {		//main() keeps everything in a single place and makes it easy to read and understand
	int choice = 0;		//stores user input
	
	while (true) {	//shows the menu repeatedly until the user selects exit. This makes a clear, predictable and controlled flow
		std::cout << "\n=== Main Menu ===\n"
				<< "1: Read from File\n"
				<< "2: Write to File\n"
				<< "3: Perform Calculation\n"
				<< "4: Exit\n"
				<< "Choose (1-4): ";
				
		if (!(std::cin >> choice)) {	//this line checks for non-numeric input, helping to keep input clear and concise
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //clear and ignore prevents loops happening due to non-numerical input
			std::cout << "Please enter a number (1, 2, or 3). \n";
			continue;
		}
	
		switch (choice) {		//replaced if/else w/ switch to simplify menu code; allows menu to offer more than the 3 options w/o becoming long and repeating itself
			case 1:
				readFile();		//this function will be in another file
				break;
				
			case 2:
				writeFile();	//this function will be in another file
				break;
			
			case 3:
				performCalculation();	//new function call
				break;

			case 4:
				std::cout << "Exiting program. Goodbye!\n";
				return 0;
			
			default:
				std::cout << "Invalid selection.\n";
		}
	}

return 0;

}
