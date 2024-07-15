#include "main.h"


/**
 * print_line - Custom function
 * @n: integer parameter to limit the loop
 *
 * Description: Print an line with n underscores
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i  < n; i++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
