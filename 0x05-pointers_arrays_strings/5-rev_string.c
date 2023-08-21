#include "main.h"

/**
 * rev_string - Custom function
 * @s: pointer to an char to reverse
 *
 * Description: Reverse a given string
 * Return: void
 */
void rev_string(char *s)
{

	char *ptr;
	int length;

	length = 0;
	*ptr = *s;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	s--;

	while (length > 0)
	{
		_putchar(*s);
		s--;
		length--;
	}

	_putchar(10);

}
