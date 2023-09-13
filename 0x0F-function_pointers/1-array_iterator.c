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
	int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}

