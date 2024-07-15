#include "main.h"


/**
 * _isalpha - Custom function
 * @c: integer parameter to be checked
 *
 * Description: Checks if a given character is a letter
 * Return: 1 if is a letter and 0 otherwise
 */
int _isalpha(int c)
{
	int result = 0;
	int lwLimit1 = 65;
	int lwLimit2 = 97;
	int hLimit1 = 90;
	int hLimit2 = 122;

	if ((c >= lwLimit1 && c <= hLimit1) || (c >= lwLimit2 && c <= hLimit2))
	{
		result = 1;
	}
	else
	{
		result = 0;
	}

	return (result);
}
