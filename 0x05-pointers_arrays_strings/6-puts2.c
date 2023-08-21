#include "main.h"

/**
 * puts2 - Custom function
 * @str: pointer to an char to print
 *
 * Description: Prints every odd charact of a given string
 * Return: void
 */
void puts2(char *str)
{

	int pos;

	pos = 0;

	while (*str != '\0')
	{
		if (pos % 2 == 0)
		{
			_putchar(*str);
		}

		pos++;
		str++;
	}

	_putchar(10);

}
