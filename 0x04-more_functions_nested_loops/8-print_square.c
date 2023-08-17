#include "main.h"


/**
 * print_square - Custom function
 * @size: integer parameter to limit the loop
 *
 * Description: Print a size x size matrix 
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i  < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
