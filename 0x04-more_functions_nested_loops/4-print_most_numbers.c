#include "main.h"


/**
 * print_most_numbers - Custom function
 * Description: Print numbers from 0 to 9 except 2 & 4
 * Return: 0 - Always success
 */
void print_most_numbers(void)
{
	int counter;

	for (counter = 0; counter <= 9; counter++)
	{
		if (counter != 2 && counter != 4)
			_putchar('0' + counter);
	}

	_putchar('\n');
}
