#include "main.h"


/**
 * more_numbers - Custom function
 * Description: Prints numbers from 0 to 14, 10 times
 * Return: 0 - Always success
 */
void more_numbers(void)
{
	int counter;
	int i = 0;

	while (i < 10)
	{
		for (counter = 0; counter <= 14; counter++)
		{
			if (counter >= 10)
				_putchar('0' + counter / 10);

			_putchar('0' + counter % 10);
		}

		_putchar('\n');
		i++;
	}
}
