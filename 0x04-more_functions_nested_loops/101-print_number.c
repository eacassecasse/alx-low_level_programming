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
	int num = n;

	if (num == 0)
	{
		_putchar(48);
		return;
	}

	if (n == INT_MIN)
	{
		_putchar('-');
		print_number(147483648);
		return;
	}

	if (n < 0)
	{
		num = -num;
		_putchar('-');
	}

	if (num >= 10)
	{
		print_number(num / 10);
	}

	_putchar(num % 10 + '0');
}
