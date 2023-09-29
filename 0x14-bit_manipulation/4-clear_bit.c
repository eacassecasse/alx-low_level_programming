#include "main.h"

/**
 * clear_bit - Custom function
 * @n: pointer to the number to clear a bit on
 * @index: position of where to clear the bit
 *
 * Description: Sets a bit to 0 at a given index
 * Return: 1 on success or -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int aux;

	if (index > 64)
		return (-1);
	aux = index;
	for (i = 1; aux > 0; i *= 2, aux--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
