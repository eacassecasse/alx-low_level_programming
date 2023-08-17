#include <stdio.h>


/**
 * main - Entry Point
 *
 * Description: Prints numbers from 1 to 100 replacing multiples of 3 and/or 5
 * Return: 0 - Always Success
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			(i < 100) ? printf("Fizz ") : printf("Fizz");
		else if (i % 5 == 0)
			(i < 100) ? printf("Buzz ") : printf("Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			(i < 100) ? printf("FizzBuzz ") : printf("FizzBuzz");
		else
			(i < 100) ? printf("%d ", i) : printf("%d", i);
	}

	printf("\n");

	return (0);
}
