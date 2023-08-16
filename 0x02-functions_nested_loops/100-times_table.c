#include "main.h"


/**
 * print_times_table - Custom function
 * @n - integer parameter
 *
 * Description: Prints n times tables starting with 0
 * Return: void
 */
void print_times_table(int n)
{
	if (n > 0 && n <= 15)
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int res = i * j;

				if (res >=100 && res <= 999)
				{
					_putchar('0' + res / 100);
					_putchar('0' + res % 100 / 10);
				}
				else
				{
					if (j > 0)
						_putchar(32);

					if (res >= 10)
					{
						_putchar('0' + res / 10);
					}
					else
					{
						if (j > 0)
						{
							_putchar(32);
						}	
					}
				}

				_putchar('0' + res % 10);

				if (j < n)
				{
					_putchar(44);
					_putchar(32);
				}

			}

			_putchar(10);
		}
	}
}
