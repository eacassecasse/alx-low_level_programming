#include "main.h"


/**
 * print_last_digit - Custom function
 * @n: integer parameter to print its last value
 *
 * Description: Prints the value of the last digit of a number
 * Return: The last digit of the given number
 */
int print_last_digit(int n)
{
	int tmp = n;
	int last_digit;

	if (n < 0)
	{
		tmp *= -1;
	}

	last_digit = tmp % 10;

	_putchar('0' + last_digit);

	return last_digit;
}
