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
	long int prevEl = 1;
	long int curEl = 1;
	long int auxPrevEl;

	for (i = 0; i < 98; i++)
	{
		(i < 97) ? printf("%ld, ", curEl) : printf("%ld\n", curEl);

		auxPrevEl = prevEl;
		prevEl = curEl;
		curEl += auxPrevEl;
	}

	return (0);
}
