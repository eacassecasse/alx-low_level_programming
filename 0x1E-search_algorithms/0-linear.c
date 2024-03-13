#include "search_algos.h"

/**
 * linear_search - Custom function.
 * @array: The array to search the value in.
 * @size: The size of the array.
 * @value: The value to search for.
 *
 * Description: Searces for a value into an array
 * 		using linear search algorythm.
 *
 * Return: The index of where the value is or -1 in
 *         case the value is not found or the array is
 *         empty.
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	for (i = 0; (size_t)i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}
