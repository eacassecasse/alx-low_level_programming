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
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}

	_putchar('0' + last_digit);

	return (last_digit);
}
