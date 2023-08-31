#include "main.h"

/**
 * wildcmp - Custom function
 * @s1: pointer to the first string to compare
 * @s2: pointer to the second string to compae
 *
 * Description: Compares 2 strings
 * Return: int | 1 if are identical and 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0' && *s1 == '\0')
		return (1);

	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s2, s1 + 1));

	return (0);
}
