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
	unsigned int num = n;

	if (num == 0)
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
		num = -num;
		_putchar('-');
	}

	if (num >= 10)
		print_number(num / 10);

	_putchar('0' + num % 10);
}
