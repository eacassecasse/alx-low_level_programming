#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Custom function
 * @a: pointer to an array of 8 integers
 * @size: size of the array
 *
 * Description: Print the sum of the diagonals of a matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, sumLDiag = 0, sumRDiag = 0;

	for (i = 0; i < size; i++)
	{
		sumLDiag += a[(size * i) + i];
		sumRDiag += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", sumLDiag, sumRDiag);
}

