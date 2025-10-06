//Class: SDC255 - Agile and Scrum
//Name: Samantha Riser, Broc Salvati

#include <iostream>	
#include <limits>	
#include <stdio.h>
#include "file_ops.h"	
#include "calc_ops.h"	

bool readMenuChoice(int& choice) {
    if (std::cin >> choice) return true;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Please enter a number shown in the menu.\n";
    return false;
}

int main() {		
	int choice = 0;		
	
	while (true) {	
		std::cout << "\n=== Main Menu ===\n"
				<< "1: Read from File\n"
				<< "2: Write to File\n"
				<< "3: Perform Calculation\n"
				<< "4: Exit\n"
				<< "Choose (1-4): ";
				
		if (!(std::cin >> choice)) {	
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Please enter a number (1, 2, 3 or 4). \n";
			continue;
		}
	
		switch (choice) {		
			case 1:
				readFile();		
				break;
				
			case 2:
				writeFile();	
				break;
			
			case 3:
				performCalculation();	
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
