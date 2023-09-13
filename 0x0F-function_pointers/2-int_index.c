#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - Custom function
 * @array: The array on which to perform actions
 * @size: Size of the array
 * @cmp: Function that compares array elements
 *
 * Description: Compares array elements using the given callback
 * Return: The first non-zero result of the comparison or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || !array || !cmp)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) != 0)
				return (i);
		i++;
	}

	return (-1);
}

