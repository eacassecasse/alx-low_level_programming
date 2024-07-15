#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: Prints comma separated values
 * Return: 0 - Always success
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);

		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar(10);

	return (0);
}
