#pragma once
#include "Exercise5.h"



bool CheckIfIntOverLimits(int ThingToCheck)
{
	bool bIsOverLimit = false;
	if (ThingToCheck > INT_MAX)
	{
		return true;
	}

	return false;
}

bool CheckIfDoubleOverLimits(double ThingToCheck)
{
	bool bIsOverLimit = false;
	if (ThingToCheck > FLT_MAX)
	{
		return true;
	}
	return false;

}

bool CheckIfCharOverLimits(char ThingToCheck)
{
	bool bIsOverLimit = false;
	if (ThingToCheck > CHAR_MAX)
	{
		return true;
	}
	return false;



}