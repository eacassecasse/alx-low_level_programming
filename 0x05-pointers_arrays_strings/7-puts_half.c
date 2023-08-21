#include "main.h"

/**
 * puts_char - Custom function
 * @str: pointer to an char to print its last half
 *
 * Description: Prints the last half of a given string
 * Return: void
 */
void puts_half(char *str)
{

	int length;
	int start_pos;

	length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}

	if (length % 2 == 0)
	{
		start_pos = length / 2;
	}
	else
	{
		start_pos = (length - 1) / 2;
	}

	while (length > start_pos)
	{
		str--;
		length--;
	}

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}


	_putchar(10);

}
