#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - Custom function
 * @array: The array on which to perform an action
 * @size: Size of the array
 * @action: The action to perform on each array element
 *
 * Description: Performs the action indicated by the callback on array
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (!array || size < 0 || !action)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}

