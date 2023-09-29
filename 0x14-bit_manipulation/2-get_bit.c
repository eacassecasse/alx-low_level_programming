#include "main.h"

/**
 * get_bit - Custom function
 * @n: number from where to get the bit
 * @index: position of where to get the bit
 *
 * Description: Gets a bit at a given index
 * Return: the value of the bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int aux;

	if (index > 64)
		return (-1);

	aux = n >> index;

	return (aux & 1);
}
