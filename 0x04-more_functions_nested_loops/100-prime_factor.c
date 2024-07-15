#include <stdio.h>


/**
 * main - Entry Point
 *
 * Description: Prints the largest prime factor of a given number
 * Return: 0 - Always Success
 */
int main(void)
{
	long int num;
	int i, lpf;

	num = 612852475143;
	lpf = 0;

	while (num % 2 == 0)
	{
		lpf = 2;
		num /= 2;
	}

	for (i = 3; i * i <= num; i += 2)
	{
		while (num % i == 0)
		{
			if (i > lpf)
			{
				lpf = i;
			}

			num /= i;
		}
	}

	if (num > 2)
	{
		if (num > lpf)
			lpf = num;
	}

	printf("%d\n", lpf);

	return (0);
}
