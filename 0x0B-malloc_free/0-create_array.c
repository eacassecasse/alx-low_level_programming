#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - Custom function
 * @size: size of the new created array
 * @c: character to initialize the array with
 *
 * Description: Create an array dynamically with the given size
 * Return: A pointer to new allocated memory
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(arr + i) = c;

	*(arr + i) = '\0';

	return (arr);
}
