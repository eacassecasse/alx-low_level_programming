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


	if (array && cmp)
	{
		for (; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}

