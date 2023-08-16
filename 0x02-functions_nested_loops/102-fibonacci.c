#include <stdio.h>


/**
 * main - Entry Point
 *
 * Description: Prints the first 50 fibonacci numbers
 * Return: 0 - Always Success
 */
int main(void)
{
	int i;
	long prevEl = 0;
	long curEl = 1;
	long auxPrevEl;

	for (i = 0; i < 50; i++)
	{
		(i < 49) ? printf("%ld, ", curEl) : printf("%ld\n", curEl);

		auxPrevEl = prevEl;
		prevEl = curEl;
		curEl += auxPrevEl;
	}

	return (0);
}
