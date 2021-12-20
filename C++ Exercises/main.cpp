#include "Exercise2.h"
#include <math.h>
#include <regex> // std::regex_match()
#include "Exercise3.h"
#include "Exercise5.h"

float x = NAN;
float y = NAN;
bool bExercise2Done = false;
bool bExercise3Done = false;
bool bExercise5Done = false;

int main()
{
	const char* newline = "\n";
	std::cout << "What up Doe, Welcome to my cpp Exercises.\nI'm gonna be doing various stuff. \nThere's like 85 exercises or something. \nThis is Exercise 1.\nHow did I do?" << std::endl;
	//If x and y are not set in the source THEN:
	if (x || y == NAN)
	{
		std::cout << "Would you like to set the x and y varibles now? [Y/N]: ";
		std::cin >> tmpstr;
		Choice = tmpstr.c_str();
		bool regex = std::regex_match(Choice, std::regex("^[YyNn]+"));
		// WHile regex is not true DO:
		while (regex != true)
		{
			//If Choice does not contain Y/y N/n THEN:
			if (!std::regex_match(Choice, std::regex("^[YyNn]+")))
			{
				std::cout << "Please Select Yes or No. [Y/N]: ";
				std::cin >> tmpstr;
				Choice = tmpstr.c_str();
			}
			//Otherwise:
			else
			{
				break;
			}
		}
		bSetVariablesNow = ConvertStringToBool(Choice);
		//If the user wants to set the Variables THEN:
		if (bSetVariablesNow == true)
		{
			std::cout << "Please enter X value: ";
			std::cin >> x;
			std::cout << "Please enter Y value: ";
			std::cin >> y;
			std::cout << "The total sum of " << x << " and " << y << " are " << DetermineSum(x, y) << std::endl << std::endl;
			bExercise2Done = true;
		}
		else
		{
			std::cout << "The total sum of " << x << " and " << y << " are " << DetermineSum(x, y) << std::endl << std::endl;
			bExercise2Done = true;
		}
	}

	/* This code will implement the stuff from exercise 3*/
	if (bExercise2Done == true)
	{
		PrintSizeOf();
		bExercise3Done = true;
	}
	else
	{
		std::cout << "IDK how, but we managed to skip over the second/fourth exercise. So try again I guess and go look at the code";
	}

	if (bExercise3Done == true)
	{
		PrintUpperLowerLimits();
		bExercise5Done = true;
	}
	else
	{
		std::cout << "IDK how, but we managed to skip over the third exercise. So try again I guess and go look at the code";
	}

	return 0;
}