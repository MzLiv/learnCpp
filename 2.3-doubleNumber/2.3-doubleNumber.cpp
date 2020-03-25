#include <iostream>

int doubleNumber(int num)
{
	return num * 2;
}

int main()
{
	std::cout << "Enter and integer: \n";
	int input{};
	std::cin >> input;
	std::cout << doubleNumber(input);
}