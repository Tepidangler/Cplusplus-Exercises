#pragma once
#include <iostream> //std::cout //std::endl
#include <limits> // Include integer limits doesn't HAVE to be included, but for the sake of practice
#include "Exercise3.h"


/*Write a program in C++ to check the upper and lower limits of integer*/

//Unsigned Data Types

//Signed Data Types

void PrintUpperLowerLimits()
{
	const char* strint = "int";
	const char* ustrint = "unsigned int";
	const char* strlong = "long";
	const char* ustrlong = "unsigned long";
	const char* strchar = "char";
	const char* ustrchar = "unsigned char";
	const char* schar = "signed char";
	const char* strshort = "short";
	const char* ustrshort = "unsigned short";
	printf("The Maximum Limit of %s data type: %d\n", strint, INT_MAX);
	printf("The Minimum Limit of %s data type: %d\n", strint, INT_MIN);
	printf("The Maximum Limit of %s data type: %u\n", ustrint, UINT_MAX);
	printf("The Maximum Limit of %s %s data type: %lld\n", strlong, strlong, LLONG_MAX);
	printf("The Minimum Limit of %s %s data type: %lld\n", strlong, strlong, LLONG_MIN);
	printf("The Maximum Limit of %s %s data type: %llu\n", ustrlong, strlong, ULLONG_MAX);
	std::cout << "The Bits contain in char data type: " << CHAR_BIT << std::endl;
	printf("The Maximum Limit of %s data type: %d\n", strchar, CHAR_MAX);
	printf("The Minimum Limit of %s data type: %d\n", strchar, CHAR_MIN);	
	printf("The Maximum Limit of %s data type: %d\n", schar, SCHAR_MAX);
	printf("The Minimum Limit of %s data type: %d\n", schar, SCHAR_MIN);	
	printf("The Maximum Limit of %s data type: %d\n", ustrchar, UCHAR_MAX);	
	printf("The Maximum Limit of %s data type: %d\n", strshort, SHRT_MAX);	
	printf("The Minimum Limit of %s data type: %d\n", strshort, SHRT_MIN);	
	printf("The Maximum Limit of %s data type: %d\n", ustrshort, USHRT_MAX);

}