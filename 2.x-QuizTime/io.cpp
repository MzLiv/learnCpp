#include <iostream>

int readNumber()
{
	int input;
	std::cout << "Enter in integer: ";
	std::cin >> input;

	return input;
}


void writeAnswer(int sum)
{
	std::cout << "The sum is: " << sum;
}
