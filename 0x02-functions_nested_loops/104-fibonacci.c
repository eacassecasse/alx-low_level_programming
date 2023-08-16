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
	unsigned long int prevEl = 1;
	unsigned long int curEl = 1;
	unsigned long int auxPrevEl;

	for (i = 2; i < 87; ++i)
	{
		(i < 86) ? printf("%lu, ", curEl) : printf("%lu\n", curEl);

		auxPrevEl = prevEl;
		prevEl = curEl;
		curEl += auxPrevEl;
	}

	return (0);
}
