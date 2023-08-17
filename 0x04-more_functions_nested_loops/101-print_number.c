#include "main.h"
#include <limits.h>


/**
 * print_number - Custom function
 * @n: integer parameter to be printed
 *
 * Description: Print a number using _putchar
 * Return: 0 - Always success
 */
void print_number(int n)
{
	if (n == 0)
	{
		_putchar(48);
		return;
	}

	if (n == INT_MIN)
	{
		int absVal;

		absVal = -(INT_MAX) - 1;
		_putchar('-');
		print_number(absVal);
		return;
	}

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	if (n >= 10)
		print_number(n / 10);

	_putchar('0' + n % 10);
}
