#include "main.h"


/**
 * print_alphabet - Custom function
 * Description: Prints alphabet in lowercase
 * Return: 0 - Always success
 */
void print_alphabet(void)
{
	int counter;

	for (counter = 'a'; counter <= 'z'; counter++)
	{
		_putchar(counter);
	}

	_putchar('\n');
}
