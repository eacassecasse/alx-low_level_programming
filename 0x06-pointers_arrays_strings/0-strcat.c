#include "main.h"

/**
 * _strcat - Custom function
 * @dest: pointer to the first char to concatenate
 * @src: pointer to the second char to concatenate
 *
 * Description: Concatenates *src to *dest removing '\0'
 * Return: *dest strings concatenated
 */

char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return (dest);
}
