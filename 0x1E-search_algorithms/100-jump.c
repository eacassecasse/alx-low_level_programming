#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Custom function.
 * @array: The array to search the value in.
 * @size: The size of the array.
 * @value: The value to search for.
 *
 * Description: Searches for a value into an array
 * 		using jump search algorithm.
 *
 * Return: The index of where the value is or -1 in
 *         case the value is not found or the array is
 *         empty.
 */
int jump_search(int *array, size_t size, int value)
{
    int index, m, k, prev;

    if (array == NULL || size == 0)
        return (-1);

    m = (int)sqrt((double)size);
    k = 0;
    prev = index = 0;

    do {
        printf("Value checked array[%d] = [%d]\n", index, array[index]);

        if (array[index] == value)
            return (index);
        k++;
        prev = index;
        index = k * m;
    } while (index < (int)size && array[index] < value);

    printf("Value found between indexes [%d] and [%d]\n", prev, index);

    for (; prev <= index && prev < (int)size; prev++)
    {
        printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
        if (array[prev] == value)
            return (prev);
    }

    return (-1);
}