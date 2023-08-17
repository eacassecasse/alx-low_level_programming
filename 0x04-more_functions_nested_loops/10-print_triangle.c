#include "main.h"


/**
 * print_triangle - Custom function
 * @size: integer parameter to limit the loop
 *
 * Description: Print a triangle of size x size matrix 
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i  < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if ((i + j == size - 1) || (i + j >= size))
					_putchar('#');
				else
					_putchar(' ');
			}

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
