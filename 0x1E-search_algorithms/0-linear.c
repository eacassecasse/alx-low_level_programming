#include "search_algos.h"

/**
 * linear_search - Custom function.
 * @array: The array to search the value in.
 * @size: The size of the array.
 * @value: The value to search for.
 *
 * Description: Searches for a value into an array
 *		using linear search algorithm.
 *
 * Return: The index of where the value is or -1 in
 *         case the value is not found or the array is
 *         empty.
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);


	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);

		if (value == array[i])
			return (i);
	}

	return (-1);
}
