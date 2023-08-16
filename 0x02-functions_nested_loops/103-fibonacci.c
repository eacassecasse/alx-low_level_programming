#include <stdio.h>


/**
 * main - Entry Point
 *
 * Description: Prints the first 50 fibonacci numbers
 * Return: 0 - Always Success
 */
int main(void)
{
	long prevEl = 0;
	long curEl = 1;
	long auxPrevEl;
	long sum = 0;

	while (curEl < 4000000)
	{
		if (curEl % 2 == 0)
			sum += curEl;

		auxPrevEl = prevEl;
		prevEl = curEl;
		curEl += auxPrevEl;
	}

	printf("%ld\n", sum);

	return (0);
}
