#include "main.h"

/**
 * flip_bits - Custom function
 * @n: number to flip from
 * @m: number to flip to
 *
 * Description: Counts the of bits needed to flip from one num to another
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d;
	int c;

	d = n ^ m;
	c = 0;

	while (d)
	{
		c++;
		d &= (d - 1);
	}

	return (c);
}
