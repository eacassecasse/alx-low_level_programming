#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Custom function
 * @b: pointer to binary string
 *
 * Description: Converts binary to decimal
 * Return: decimal number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal, pow;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (pow = 1, decimal = 0, len--; len >= 0; len--, pow *= 2)
	{
		if (b[len] == '1')
			decimal += pow;
	}

	return (decimal);
}
