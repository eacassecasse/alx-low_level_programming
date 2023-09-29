#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * string_nconcat - Custom function
 * @s1: The base string to append on
 * @s2: The string to copy from
 * @n: Amount of characters to copy
 *
 * Description: Concat n bytes from s2 to s1
 * Return: A pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newStr;
	unsigned int s1_len, s2_len;

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);

	if (n <= 0)
		return (NULL);

	if (n < s2_len)
		newStr = malloc(sizeof(char) * (s1_len + n + 1));
	else
		newStr = malloc(sizeof(char) * (s1_len + s2_len + 1));

	if (!newStr)
		return (NULL);

	while (*s1)
	{
		*newStr = *s1;
		newStr++;
		s1++;
	}

	newStr++;

	while (*s2 && n <= s2_len)
	{
		*newStr = *s2;
		newStr++;
		s2++;
	}


	return (newStr);
}

/**
 * _strlen - Custom function
 * @str: string to evaluate its length
 *
 * Description: Counts the length of a string
 * Return: String length
 */

unsigned int _strlen(char *str)
{
	unsigned int len = 0;

	while (str[len])
		len++;

	return (len);
}

