#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: Prints base 16 numbers from 0
 * Return: 0 - Always success
 */
int main(void)
{
	int i;

	for (i = 0; i <= 15; i++)
	{
		if (i <= 9)
		{
			putchar(i + '0');
		} else
		{
			putchar(tolower(i - 10 + 'A'));
		}
	}

	putchar(10);

	return (0);
}
