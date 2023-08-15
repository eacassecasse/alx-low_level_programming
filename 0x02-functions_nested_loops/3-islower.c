#include "main.h"


/**
 * _islower - Custom function
 * @c: integer parameter to be checked
 *
 * Description: Checks if a given character is lowercase
 * Return: 1 if is lower and 0 otherwise
 */
int _islower(int c)
{
	int result = 0;
	int lwLimit1 = 65;
	int lwLimit2 = 97;
	int highLimit1 = 90;
	int highLimit2 = 122;
	
	if (c >= lwLimit1 && c <= highLimit1)
	{
		result = 0;
	}
	else
	{
		if (c >= lwLimit2 && c <= highLimit2)
		{
			result = 1;
		}
	}

	return result;
}
