#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - Custom function
 * @b: size of the new allocated memory
 *
 * Description: Allocates memory dynamically to a variable
 * Return: A pointer to new allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *newMemo;

	newMemo = malloc(b);

	if (!newMemo)
		exit(98);

	return (newMemo);
}
