#include "main.h"


/**
 * print_number - Custom function
 * @n: integer parameter to be printed
 *
 * Description: Print a number using _putchar
 * Return: 0 - Always success
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	if (n >= 10)
		print_number(n / 10);

	_putchar('0' + n % 10);
}
