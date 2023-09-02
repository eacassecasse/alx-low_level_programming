#include "main.h"
#include <stddef.h>

/**
 * _strstr - Custom function
 * @haystack: pointer to a string where to search
 * @needle: pointer to what to search for
 *
 * Description: Finds the first occurenes of
 * the substring in the needle pointer
 * Return: A pointer to the first occurence of charaters from the string
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		char *hayAux = haystack;
		char *needAux = needle;

		while (*needAux != '\0' && *hayAux == *needAux)
		{
			hayAux++;
			needAux++;
		}

		if (*needAux == '\0')
			return (&(*haystack));

		haystack++;
	}

	return (NULL);
}

