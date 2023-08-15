#include "customlib.h"

/**
 * main - Entry point
 * Description: Prints a string using the _putchar function
 * Return: 0 - Always success
 */
int main(void)
{
	int counter = 0;
	char *str = "_putchar";

	while (counter < 8)
	{
		_putchar(str[counter]);
		counter++;
	}

	_putchar('\n');

	return (0);
}
