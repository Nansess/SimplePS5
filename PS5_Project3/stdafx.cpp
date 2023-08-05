#include "stdafx.h"

#include <iostream>
#include <string>

void PrintMessage(const char* message)
{
	std::cout << "Message: " << message << std::endl;
}

void PrintStringMessage(const std::string& message)
{
	std::cout << "String Message: " << message << std::endl;
}

int AddNumbers(int a, int b)
{
	return a + b;
}

int SquareNumber(int x)
{
	return x * x;
}

// Add more functions, classes, and global variables as needed.
// Remember to keep the definitions of additional elements in this file
// or include the appropriate source files in the project.
