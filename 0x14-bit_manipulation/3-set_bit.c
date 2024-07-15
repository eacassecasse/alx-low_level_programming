#include "main.h"

/**
 * set_bit - Custom function
 * @n: pointer to the number to set a bit on
 * @index: position of where to set the bit
 *
 * Description: Sets a bit at a given index
 * Return: 1 on success or -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int acm;

	if (index > 64)
		return (-1);

	for (acm = 1; index > 0; index--, acm *= 2)
		;
	*n += acm;

	return (1);
}
