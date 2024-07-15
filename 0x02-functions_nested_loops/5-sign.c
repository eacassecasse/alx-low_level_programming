#include "main.h"


/**
 * print_sign - Custom function
 * @n: integer parameter to be checked
 *
 * Description: Checks if a given number is positive or negative or zero
 * Return: 1 if is positive, 0 if is 0 and -1 if negative
 */
int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		_putchar(43);
		result = 1;
	}
	else
	{
		if (n == 0)
		{
			_putchar(48);
			result = 0;
		}
		else
		{
			_putchar(45);
			result = -1;
		}
	}

	return (result);
}
