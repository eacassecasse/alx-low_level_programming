#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - Custom function
 * @s1: pointer to the first par to concatanete
 * @s2: pointer to the second part of the string
 *
 * Description: Concatenates two string
 * Return: A pointer to new allocated memory
 */

char *str_concat(char *s1, char *s2)
{
	char *arr;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;

	while (s2 && s2[len2])
		len2++;

	arr = malloc(sizeof(char) * (len1 + len2 + 1));

	if (arr == NULL)
		return (NULL);

	if (s1)
	{
		while (i < len1)
		{
			arr[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (len1 + len2))
		{
			arr[i] = s2[j];
			i++;
			j++;
		}
	}

	arr[i] = '\0';

	return (arr);

}
