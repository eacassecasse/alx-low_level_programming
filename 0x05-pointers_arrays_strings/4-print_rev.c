#include "main.h"

/**
 * print_rev - Custom function
 * @s: pointer to an char to print
 *
 * Description: Prints a given string in reverse order
 * Return: void
 */
void print_rev(char *s)
{

	int length;

	length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	s--;

	while (length > 0)
	{
		_putchar(*s);
		s--;
		length--;
	}

	_putchar(10);

}
