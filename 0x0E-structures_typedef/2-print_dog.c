#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - Custom Function
 * @d: pointer to the dog struct to print
 *
 * Description: Print all the dog informations
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
