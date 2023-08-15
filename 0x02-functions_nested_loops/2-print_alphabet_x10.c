#include "main.h"


/**
 * print_alphabet_x10 - Custom function
 * Description: Prints alphabet in lowercase 10 times
 * Return: 0 - Always success
 */
void print_alphabet_x10(void)
{
	int counter;
	int i = 0;

	while (i < 10)
	{	
		for (counter = 'a'; counter <= 'z'; counter++)
		{
			_putchar(counter);
		}

		_putchar('\n');
		i++;
	}
}
