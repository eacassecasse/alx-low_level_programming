#include "main.h"


/**
 * print_numbers - Custom function
 * Description: Print numbers from 0 to 9
 * Return: 0 - Always success
 */
void print_numbers(void)
{
	int counter;

	for (counter = 0; counter <= 9; counter++)
	{
		_putchar('0' + counter);
	}

	_putchar('\n');
}
