#include "main.h"

/**
 * _memcpy - Custom function
 * @dest: pointer to a string that must be transformed
 * @src: pointer to the char from where to copy
 * @n: number of bytes that must be replaced
 *
 * Description: Replaces n bytes from a string with src characters
 * Return: Transformed string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];

		i++;
	}

	return (dest);
}
