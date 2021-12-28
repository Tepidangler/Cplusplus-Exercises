#include "Exercise2.h"
#include <math.h>
#include <regex> // std::regex_match()
#include "Exercise3.h"
#include "Exercise5.h"
#include "Exercise6.h"

float x = NAN;
float y = NAN;
bool bExercise2Done = false;
bool bExercise3Done = false;
bool bExercise5Done = false;
bool bExercise6Done = false;
bool bExercise7Done = false;
bool bExercise8Done = false;

//A SET OF VARIABLES FOR EXERCISE 6
const char Gender = 'F';
int IsMarried = 1;
int NumberOfSons = 2;
int StartYear = 2009;
int Salary = 1500000;
double Height = 79.48;
double GPA = 4.69;
int TotalComp = 12047235;
int Balance = 995324987;
//END OF VARIABLES FOR EXERCISE 6
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

	/*This code implements Exercise 5*/

	if (bExercise3Done == true)
	{
		PrintUpperLowerLimits();
		bExercise5Done = true;
	}
	else
	{
		std::cout << "IDK how, but we managed to skip over the third exercise. So try again I guess and go look at the code";
	}

	/*This code implements Exercise 6*/

	if (bExercise5Done == true)
	{
		if (CheckIfCharOverLimits(Gender) == false)
		{
			printf("\n\nThe Gender is : %c\n", Gender);
		}
		if (CheckIfIntOverLimits(IsMarried) == false)
		{
			printf("Is She Married? %d\n", IsMarried);
		}
		if (CheckIfIntOverLimits(NumberOfSons) == false)
		{
			printf("Number of sons she has: %d\n", NumberOfSons);
		}
		if (CheckIfIntOverLimits(StartYear) == false)
		{
			printf("Year of her appointment: %d\n", StartYear);
		}
		if (CheckIfIntOverLimits(Salary) == false)
		{
			printf("Salary for a year: %d\n", Salary);
		}
		if (CheckIfDoubleOverLimits(Height) == false)
		{
			printf("Height is: %.2f\n", Height);
		}
		if (CheckIfDoubleOverLimits(GPA) == false)
		{
			printf("GPA is: %.2f\n", GPA);
		}
		if (CheckIfIntOverLimits(TotalComp) == false)
		{
			printf("Salary Drawn up to: %d\n", TotalComp);
		}
		if (CheckIfIntOverLimits(Balance) == false)
		{
			printf("Balance till: %d\n", Balance);
			bExercise6Done = true;
		}
	}

	if (bExercise6Done == true)
	{
		printf("\n5 + 7 = %d\n", (5 + 7));
		printf("3.7 + 8.0 = %.1f\n", (3.7 + 8.0));
		printf("5 + 8.0 = %.1f\n", (5 + 8.0));
		printf("5 - 7 = %d\n", (5 - 7));
		printf("3.7 - 8.0 = %.1f\n", (3.7 - 8.0));
		printf("5 - 8.0 = %.1f\n", (5 - 8.0));
		printf("5 * 7 = %d\n", (5 * 7));
		printf("3.7 * 8.0 = %.1f\n", (3.7 * 8.0));
		printf("5 * 8.0 = %.1f\n", (5 * 8.0));
		printf("5 / 7 = %d\n", (5 / 7));
		printf("3.7 / 8.0 = %.1f\n", (3.7 / 8.0));
		printf("5 / 8.0 = %.1f\n", (5 / 8.0));
		bExercise7Done = true;
	}
	if (bExercise7Done == true)
	{
		printf("\nCheck overflow / underflow during various arithmetical operation :\n");
		printf("Range of int is [%d, %d]\n", INT_MIN, INT_MAX);
		printf("-------------------------------------------------------------------- -\n");
		printf("Overflow the integer range and set in minimum range : %d\n", (INT_MIN ));
		printf("Increasing from its minimum range : %d\n", (INT_MIN + 1));
		printf("Product is : %d\n", ((unsigned)INT_MAX* (unsigned)INT_MAX));
		printf("Underflow the range and set in maximum range : %d\n", (INT_MAX ));
		printf("Decreasing from its maximum range : %d\n", (INT_MAX - 1));
		printf("Product is : %d\n", ((unsigned)INT_MIN* (unsigned)INT_MIN));
		bExercise8Done = true;
	}

	return 0;
}