#include "io.h"

int main()
{
	int num1;
	num1 = readNumber();

	int num2;
	num2 = readNumber();

	writeAnswer(num1 + num2);

	return 0;
}

/*
Write a single - file program(named main.cpp) that reads two separate integers from the user, adds them together, 
and then outputs the answer.The program should use three functions :

A function named �readNumber� should be used to get(and return) a single integer from the user.
A function named �writeAnswer� should be used to output the answer.This function should take a single parameterand 
have no return value.
A main() function should be used to glue the above functions together.
*/