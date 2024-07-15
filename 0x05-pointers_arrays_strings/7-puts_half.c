#include "main.h"

/**
 * puts_half - Custom function
 * @str: pointer to an char to print its last half
 *
 * Description: Prints the last half of a given string
 * Return: void
 */
void puts_half(char *str)
{

	int length, i;
	int start_pos;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	start_pos = (length + 1) / 2;


	for (i = start_pos; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar(10);

}
