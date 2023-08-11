#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

/**
 * main - Entry point
 * Description: Prints the last digit of a number
 * Return: 0 - Always success
 */
int main(void)
{
	int n;
	int last_digit;
	char output[] = "Last digit of %d is %d ";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	if (last_digit > 6)
	{
		strcat(output, "and is greater than 5\n");
		printf(output, n, last_digit);
	}
	else if (last_digit == 0)
	{
		strcat(output, "and is 0\n");
		printf(output, n, last_digit);
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		strcat(output, "and is less than 6 and not 0\n");
		printf(output, n, last_digit);
	}

	return (0);
}
