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
	unsigned int s1_len = 0, s2_len = 0, i = 0, j = 0;

	while (s1 && s1[s1_len])
		s1_len++;

	while (s2 && s2[s2_len])
		s2_len++;

	if (n < s2_len)
		newStr = malloc(sizeof(char) * (s1_len + n + 1));
	else
		newStr = malloc(sizeof(char) * (s1_len + s2_len + 1));

	if (!newStr)
		return (NULL);

	while (i < s1_len)
	{
		newStr[i] = s1[i];
		i++;
	}

	while (n < s2_len && i < (s1_len + n))
		newStr[i++] = s2[j++];

	while (n >= s2_len && i < (s1_len + s2_len))
		newStr[i++] = s2[j++];

	newStr[i] = '\0';


	return (newStr);
}


