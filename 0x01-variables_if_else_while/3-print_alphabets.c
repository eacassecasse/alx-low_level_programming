#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: Prints alphabet in lower and uppercase
 * Return: 0 - Always success
 */
int main(void)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		char lowercase = tolower(i);

		putchar(lowercase);
	}

	for (i = 'A'; i <= 'Z'; i++)
	{

		putchar(i);
	}


	putchar(10);

	return (0);
}
