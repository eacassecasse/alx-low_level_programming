#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: Prints base 10 numbers from 0
 * Return: 0 - Always success
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}

	putchar(10);

	return (0);
}
