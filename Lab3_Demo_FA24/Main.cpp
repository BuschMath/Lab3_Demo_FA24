#include <iostream>
#include <string>
#include "StatsCalc.h"
#include "fstream"			// Added for file I/O

int getInput(std::string nubName);
void printNumber(int number);

int main()
{
	std::cout << "We need four numbers from you." << std::endl;
	
	int number1 = getInput("first");
	int number2 = getInput("second");
	int number3 = getInput("third");
	int number4 = getInput("fourth");

	printNumber(number1);
	printNumber(number2);
	printNumber(number3);
	printNumber(number4);

	StatsCalc statsCalc;
	float mean = statsCalc.mean(number1, number2, number3, number4);
	std::cout << "The mean of the numbers is: " << mean << std::endl;

	// file I/O
	std::ofstream outFile;				// Declare an output file stream (simular to cout)
	outFile.open("output.dat");		// Open file for writing called output.dat
	outFile << "The mean of the numbers is: " << mean << std::endl;	// Write to the file
	outFile.close();					// Close the file

	return 0;
}

int getInput(std::string nubName)
{
	std::cout << "Please enter the " << nubName << " number: ";
	int input;
	std::cin >> input;
	return input;
}

void printNumber(int number)
{
	std::cout << "You entered: " << number << std::endl;
}