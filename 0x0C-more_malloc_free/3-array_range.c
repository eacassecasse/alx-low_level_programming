#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - Custom function
 * @min: the lower boundary value to put on the array
 * @max: the upper boundary value to put on the array
 *
 * Description: Creates an array of integers from min to max
 * Return: A pointer to new created array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, minCopy, count = 0;

	if (min > max)
		return (NULL);

	for (minCopy = min; minCopy <= max; minCopy++)
		count++;

	arr = malloc(sizeof(int) * count);

	if (!arr)
		return (NULL);

	for (i = 0; i <= count && min <= max; i++, min++)
		arr[i] = min;

	return (arr);
}


