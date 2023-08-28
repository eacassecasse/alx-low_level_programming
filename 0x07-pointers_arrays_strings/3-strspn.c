#include "main.h"
#include <stddef.h>

/**
 * _strspn - Custom function
 * @s: pointer to a string that must be transformed
 * @accept: pointer to evaluate with
 *
 * Description: Counts characters from a string that
 * consists only from characts present on the accept
 * Return: Number of charaters from the string
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	while (*s != '\0' && _strchr(accept, *s) != NULL)
	{
		len++;
		s++;
	}

	return (len);
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
