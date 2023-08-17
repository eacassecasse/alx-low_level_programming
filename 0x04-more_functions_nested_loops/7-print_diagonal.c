#include "main.h"


/**
 * print_diagonal - Custom function
 * @n: integer parameter to limit the loop
 *
 * Description: Print a diagonal
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i  < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i - j == 0)
					_putchar('\\');
				else if(j < i)
					_putchar(32);
			}

			_putchar('\n');
		}

		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
