#include "main.h"

/**
 * print_number - Custom function
 * @n: number to print
 *
 * Description: Print a given number using _putchar
 * Return: void
 */

void print_number(int n)
{
	unsigned int ncopy;

	if (n < 0)
	{
		ncopy = -n;
		_putchar('-');
	}
	else
		ncopy = n;

	if (ncopy >= 10)
		print_number(ncopy / 10);

	_putchar('0' + (ncopy % 10));
}
