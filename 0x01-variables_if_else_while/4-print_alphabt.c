#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: Prints alphabet in lowercase
 * Return: 0 - Always success
 */
int main(void)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if ((i != 'E') && (i != 'Q'))
		{
			char lowercase = tolower(i);

			putchar(lowercase);
		}
	}

	putchar(10);

	return (0);
}
