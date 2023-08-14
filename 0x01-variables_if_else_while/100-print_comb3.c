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
	int comb;
	const int separator[] = {44, 32};
	int length = sizeof(separator) / sizeof(separator[0]);

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{

			comb = i * 10 + j;

			(comb >= 10) ? putchar('0' + comb / 10) : putchar('0');

			putchar('0' + comb % 10);

			if (comb < 89)
			{
				for (k = 0; k < length; k++)
				{
					putchar(separator[k]);
				}
			}

		}
	}

	putchar(10);

	return (0);
}
