#include <iostream>

int main()
{
	std::cout << "Enter an integer: "; // request first number from user
	int num1; // initalise variable num1 for first number
	std::cin >> num1; // assign input number to num1

	std::cout << "Enter another integer: "; // request second number from user
	int num2; // inialise variabble num2 for second number
	std::cin >> num2; // assign input number to num2

	std::cout << num1 << " + " << num2 << " = " << num1 + num2 << '\n'; // output num1 + num2 = answer
	std::cout << num1 << " - " << num2 << " = " << num2 - num2 << '\n'; // output num1 - num2 = answer

}