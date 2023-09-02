#include "main.h"


/**
 * _isdigit - Custom function
 * @c: integer parameter to be checked
 *
 * Description: Checks if a given character is a digit
 * Return: 1 if is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	int result = 0;
	int lwLimit1 = 48;
	int hLimit1 = 57;

	if (c >= lwLimit1 && c <= hLimit1)
	{
		result = 1;
	}
	else
	{
		result = 0;
	}

	return (result);
}
