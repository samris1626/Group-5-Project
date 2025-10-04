//Class: SDC255 - Agile and Scrum
//Name: Samantha Riser, Broc Salvati, Venisha Smith

#include <iostream>
#include <fstream>
#include "file_ops.h"

void readFile() {
	std::ifstream inFile("data.txt"); //input file stream, opens file for reading

  if (!inFile) {    //makes sure the file can be found and opened
      std::cout << "Error: Could not open file for reading.\n";
      return;  //exit the function early if the file can't be opened
  }

  std::string line;  //store each line read from the file

  while (std::getline(inFile, line)) {    //read file line by line until end of file is reached
      std::cout << line << std::endl;    //print each line to the console
  }

  inFile.close();    //closes the file when done. This is considered a 'best practice' step
}

void writeFile() {
	std::cout << "Writing to File..." << std::endl;
	//add file writing code at a TBD time
}
