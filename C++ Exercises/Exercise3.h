#pragma once
#include <iostream> // std::cout std::endl


unsigned long long SizeOfChar = sizeof(char);
unsigned long long SizeOfShort = sizeof(short);
unsigned long long SizeOfInt = sizeof(int);
unsigned long long SizeOfLong = sizeof(long);
unsigned long long SizeOfLongLong = sizeof(long long);
unsigned long long SizeOfFloat = sizeof(float);
unsigned long long SizeOfDouble = sizeof(double);
unsigned long long SizeOfLongDouble = sizeof(long double);
unsigned long long SizeOfBoolean = sizeof(bool);

/*Write a program in C++ to find Size of fundamental data types*/

void PrintSizeOf()
{
	std::cout << "The Size of(char) is: " << sizeof(char) << std::endl;
	std::cout << "The Size of(short) is: " << sizeof(short) << std::endl;
	std::cout << "The Size of(int) is: " << sizeof(int) << std::endl;
	std::cout << "The Size of(long) is: " << sizeof(long) << std::endl;
	std::cout << "The Size of(long long) is: " << sizeof(long long) << std::endl;
	std::cout << "The Size of(float) is: " << sizeof(float) << std::endl;
	std::cout << "The Size of(double) is: " << sizeof(double) << std::endl;
	std::cout << "The Size of(long double) is: " << sizeof(long double) << std::endl;
	std::cout << "The Size of(bool) is: " << sizeof(bool) << std::endl << std::endl;
}