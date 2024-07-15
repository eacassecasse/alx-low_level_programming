#include "main.h"


/**
 * _abs - Custom function
 * @n: integer parameter to print its absolute value
 *
 * Description: Prints the absolute value of a number
 * Return: The absolute of the given number
 */
int _abs(int n)
{
	int tmp = n;

	if (tmp < 0)
	{
		tmp *= -1;
	}


	return (tmp);
}
