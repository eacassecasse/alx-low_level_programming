#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: Prints alphabet in lowercase rev
 * Return: 0 - Always success
 */
int main(void)
{
	int i;

	for (i = 'Z'; i >= 'A'; i--)
	{
		char lowercase = tolower(i);

		putchar(lowercase);
	}

	putchar(10);

	return (0);
}
