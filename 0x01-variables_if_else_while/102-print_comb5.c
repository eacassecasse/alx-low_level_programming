#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 * Description: Prints if a random num is <, =, > than 0
 * Return: 0 - Always success
 */
int main(void)
{

	int i, j, k;
	int c1tens, c1ones, c2tens, c2ones;
	const int separator[] = {44, 32};
	int length = sizeof(separator) / sizeof(separator[0]);

	for (i = 0; i <= 99; i++)
	{
		for (j = i; j <= 99; j++)
		{

			c1tens = i / 10;
			c1ones = i % 10;
			c2tens = j / 10;
			c2ones = j % 10;

			if (i - j != 0)
			{
				putchar('0' + c1tens);
				putchar('0' + c1ones);
				putchar(32);
				putchar('0' + c2tens);
				putchar('0' + c2ones);

				if (i != 98 || j != 99)
				{
					for (k = 0; k < length; k++)
					{
						putchar(separator[k]);
					}
				}
			}

		}
	}

	putchar(10);

	return (0);
}
