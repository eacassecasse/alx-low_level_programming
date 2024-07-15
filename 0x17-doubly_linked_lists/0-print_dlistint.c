#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Custom function
 * @h: pointer to doubly linked list node
 *
 * Description: Prints all the elements of the linked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;

	if (!h)
		return (size);

	while (h->prev)
		h = h->prev;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}

	return (size);
}
