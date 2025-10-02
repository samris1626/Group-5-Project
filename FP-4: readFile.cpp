//Class: SDC255 - Agile and Scrum
//Name: Samantha Riser, Broc Salvati, Venisha Smith

#include <iostream>  //for console input/output
#include <fstream>  //for file input/output
#include <string> //using to hold file data
#include "file_ops.h"  //allows files to communicate; naming MUST match completely

void readFile() {
  std::ifstream inFile("data.txt."); //input file stream, opens file for reading

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
