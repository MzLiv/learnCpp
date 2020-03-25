#include <iostream>

int main()
{
	std::cout << "Enter an integer: ";

	int num{ 0 }; // define variable num as an integer variable
	std::cin >> num; // get integer value from user's keyboard

	std::cout << "Double that number is: " << num * 2 << '\n'; // outputs double num using an expression without altering the value for num

	std::cout << "Triple that number is: " << num * 3 << '\n'; // outputs tripple num using an expression

	return 0;
}