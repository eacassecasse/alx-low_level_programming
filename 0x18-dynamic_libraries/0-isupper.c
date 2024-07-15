#include "main.h"


/**
 * _isupper - Custom function
 * @c: integer parameter to be checked
 *
 * Description: Checks if a given character is uppercase
 * Return: 1 if is upper and 0 otherwise
 */
int _isupper(int c)
{
	int result = 0;
	int lwLimit1 = 65;
	int lwLimit2 = 97;
	int highLimit1 = 90;
	int highLimit2 = 122;

	if (c >= lwLimit1 && c <= highLimit1)
	{
		result = 1;
	}
	else
	{
		if (c >= lwLimit2 && c <= highLimit2)
		{
			result = 0;
		}
	}

	return (result);
}
