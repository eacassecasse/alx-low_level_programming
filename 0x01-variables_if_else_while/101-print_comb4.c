#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints if a random num is <, =, > than 0
 * Return: 0 - Always success
 */
int main(void)
{

	int i, j, k, counter;
	int comb;
	int separ[] = {44, 32};
	int length = sizeof(separ) /sizeof(separ[0]);

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				if (i < j && j < k)
				{
					comb = i * 100 + j * 10 + k;

					putchar('0' + comb / 100);
					putchar('0' + comb % 100 / 10);
					putchar('0' + comb % 10);

					if (comb < 789)
					{
						for (counter = 0; counter < length; counter++)
						{
							putchar(separ[counter]);
						}
					}	
				}
			}
		}
	}

	putchar(10);

	return (0);
}
