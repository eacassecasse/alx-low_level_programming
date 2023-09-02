#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Custom function
 * @s: pointer to a string that must be transformed
 * @accept: pointer to evaluate with
 *
 * Description: Search for the first occurences of
 * characters present on the accept
 * Return: A pointer to the first occurence of charaters from the string
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (_strchr(accept, *s) != NULL)
		{
			return (&(*s));
		}

		s++;
	}

	return (NULL);
}

/**
 * _strchr - Custom function
 * @s: pointer to a string that must be transformed
 * @b: character to search for
 *
 * Description: Search for a given charactr
 * Return: A pointer to the first occurence of thò chararcter
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
