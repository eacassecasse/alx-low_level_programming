#include <stdio.h>
#include "main.h"

/**
 * print_array - Custom function
 * @a: pointer to an array to print its items
 * @n: size of the array
 *
 * Description: Print the items of a given array
 * Return: void
 */
void print_array(int *a, int n)
{

	int i;

	i = 0;

	while (i < n)
	{
		printf("%d", a[i]);

		if (i < n - 1) 
			printf(", ");
		i++;
	}

	printf("\n");
}
