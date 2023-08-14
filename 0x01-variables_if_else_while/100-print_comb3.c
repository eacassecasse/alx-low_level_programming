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
	char comb[10];
	const char separator[] = ", ";
	int length = strlen(separator);

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i < j)
			{
				int tmp;

				sprintf(comb, "%d%d", i, j);

				tmp = atoi(comb);

				if (tmp >= 10)
				{
					putchar('0' + tmp / 10);
				}
				else
				{
					putchar('0');
				}

				putchar('0' + tmp % 10);

				if (tmp < 89)
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
