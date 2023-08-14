#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints if a random num is <, =, > than 0
 * Return: 0 - Always success
 */
int main(void)
{

	int i, j, k;
	char comb[10];

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				if (i < j && j < k)
				{
				
					int tmp;

					sprintf(comb, "%d%d%d", i, j, k);

					tmp = atoi(comb);

					putchar('0' + tmp / 10);
					putchar('0' + tmp / 10);
					putchar(tmp % 10 + '0');
					putchar(32);
				}
			}
		}
	}

	return (0);
}
