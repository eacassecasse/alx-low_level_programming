#include "main.h"

/**
 * _print_rev_recursion - Custom function
 * @s: pointer to a string to print
 *
 * Description: Print the given string in reverse order using _putchar
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
