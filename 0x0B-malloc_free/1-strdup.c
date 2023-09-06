#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - Custom function
 * @str: string to duplicate
 *
 * Description: Duplicates a string
 * Return: A pointer to new allocated memory
 */

char *_strdup(char *str)
{
	char *duplicate;
	int i = 0, j = 0;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	duplicate = malloc(sizeof(char) * (i + 1));

	if (duplicate == NULL)
		return (NULL);

	while ((duplicate[j] = str[j]) != '\0')
		j++;

	return (duplicate);
}
