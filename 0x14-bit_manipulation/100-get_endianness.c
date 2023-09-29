#include "main.h"

/**
 * get_endianness - Custom function
 *
 * Description: Check the endianness
 * Return: 0 for Big Endian and 1 for Little Endian
 */
int get_endianness(void)
{
	int n;

	n = 1;
	if (*(char *)&n == 1)
		return (1);
	else
		return (0);
}
