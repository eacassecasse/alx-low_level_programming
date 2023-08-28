#include "main.h"
#include <stddef.h>

/**
 * _strchr - Custom function
 * @s: pointer to a string that must be transformed
 * @b: character to search for
 *
 * Description: Search for a given charactr
 * Return: A pointer to the first occurence of the chararcter
 */

char *_strchr(char *s, char b)
{
	while (*s != '\0')
	{
		if (*s == b)
		{
			return (&(*s));
		}

		s++;
	}

	return (NULL);
}
