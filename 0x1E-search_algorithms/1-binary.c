#include <stdio.h>
#include "search_algos.h"

int _binary_search(int *array, size_t size, int value);

/**
 * _binary_search - Custom function.
 * @array: The array to search the value in.
 * @size: The size of the array.
 * @value: The value to search for.
 *
 * Description: Searces for a value into an array
 * 		recursively.
 *
 * Return: The index of where the value is or -1 in
 *         case the value is not found or the array is
 *         empty.
 */
int _binary_search(int *array, size_t size, int value) {
    
    int i, pivot;
    
    if (!array || size == 0)
        return (-1);
        
    printf("Searching array: ");
    
    for (i = 0; (size_t)i < size; i++)
        printf("%s %d", (i == 0) ? "" : ",", array[i]);
        
    printf("\n");
    
    pivot = (size % 2 == 0) ? size / 2 : (size - 1) / 2;
    
    if (value == array[pivot]) {
        return (pivot);
    }
    
    if (value < array[pivot]) {
        return _binary_search(array, pivot, value);
    }
        
    pivot++;
    
    return (_binary_search(array + pivot, size - pivot, value) + pivot);
}


/**
 * binary_search - Custom function.
 * @array: The array to search the value in.
 * @size: The size of the array.
 * @value: The value to search for.
 *
 * Description: Searces for a value into an array
 * 		using binary search algorythm.
 *
 * Return: The index of where the value is or -1 in
 *         case the value is not found or the array is
 *         empty.
 */
int binary_search(int *array, size_t size, int value) {
    int pos;

    pos = _binary_search(array, size, value);

    if (pos >= 0 && array[pos] != value)
        return (-1);

    return (pos);
}

