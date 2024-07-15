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
