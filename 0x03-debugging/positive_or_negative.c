#include <stdio.h>

/**
 * positive_or_negative - Custom function
 * @n: integer parameter
 *
 * Description: Prints if a given num is <, =, > than 0
 * Return: void
 */
void positive_or_negative(int n)
{

	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}

}
