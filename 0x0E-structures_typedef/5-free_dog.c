#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Custom Function
 * @d: point to the dog struct
 *
 * Description: Frees a dog
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
