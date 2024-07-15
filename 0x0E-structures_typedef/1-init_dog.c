#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Custom Function
 * @d: point to the dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: Dog's owner
 *
 * Description: Initializes a new dog
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
