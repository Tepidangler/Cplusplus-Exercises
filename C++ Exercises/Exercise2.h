#pragma once
#include <iostream> // std::cin && std::cout
#include <string> //std::string
#include <regex>
//Varibles

bool bSetVariablesNow;
std::string tmpstr;
const char* Choice;

//A float function to Determine the sum or two floats
float DetermineSum(float& x, float& y)
{
	float sum;

	if (isnan(x) == true)
	{
		std::cout << "Please Supply First Number: ";
		std::cin >> x;
		if (isnan(y) == true)
		{
			std::cout << "Please Supply Second Number: ";
			std::cin >> y;
			return y;
		}
		return x;
		
	}
	sum = x + y;
	return (x + y);

};

//A bool function to convert a string to a boolean variable. Very simple, doesn't do anything extraordinary, but it provides a starting point to move deeper later on.

bool ConvertStringToBool(const char* StringToConvert)
{
	bool result;

	if (std::regex_match(StringToConvert, std::regex("^[Yy]+")))
	{
		result = true;
		return result;
	}
	if (std::regex_match(StringToConvert, std::regex("^[Nn]+")))
	{
		result = false;
		return result;
	}
	
	return EXIT_FAILURE;
};

//A bool function to determine if there is a digit in the string

bool IsNumber(std::string StringToCheck)
{
	for (char const& c : StringToCheck)
	{
		if (std::isdigit(c) == 0)
			return false;
	}
	return true;
}
