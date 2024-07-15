#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid - Custom function
 * @grid: width of the matrix
 * @height: height of the matrix
 *
 * Description: Alocates space for a grid  dynamically
 * Return: A pointer to new allocated memory
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
