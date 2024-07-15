#include "main.h"

/**
 * _puts_recursion - Custom function
 * @s: pointer to a string to print
 *
 * Description: Print the given string using _putchar and recursion
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
