#include "main.h"


/**
 * times_table - Custom function
 *
 * Description: Prints 9 times tables starting with 0
 * Return: void
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int res = i * j;

			(res >= 10) ? _putchar('0' + res / 10) : _putchar(32);

			_putchar('0' + res % 10);

			if (j < 9)
			{
				_putchar(44);
				_putchar(32);
			}

		}

		_putchar(10);
	}
}
