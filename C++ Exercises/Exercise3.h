#pragma once
#include <iostream>
#include <math.h>
#include <string> // std::string

/*Write a program in C++ to find Size of fundamental data types*/

void PrintSizeOf()
{
	std::cout << "The Size of(char) is: " << sizeof(char) << std::endl;
	std::cout << "The Size of(short) is: " << sizeof(char) << std::endl;
	std::cout << "The Size of(int) is: " << sizeof(int) << std::endl;
	std::cout << "The Size of(long) is: " << sizeof(long) << std::endl;
	std::cout << "The Size of(long long) is: " << sizeof(long long) << std::endl;
	std::cout << "The Size of(float) is: " << sizeof(float) << std::endl;
	std::cout << "The Size of(double) is: " << sizeof(double) << std::endl;
	std::cout << "The Size of(long double) is: " << sizeof(long double) << std::endl;
	std::cout << "The Size of(bool) is: " << sizeof(bool) << std::endl;
}