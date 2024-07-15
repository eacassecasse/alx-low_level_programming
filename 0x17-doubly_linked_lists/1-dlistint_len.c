#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - Custom function
 * @h: pointer to doubly linked list node
 *
 * Description: count elements of the linked list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	if (!h)
		return (size);

	while (h->prev)
		h = h->prev;

	while (h)
	{
		h = h->next;
		size++;
	}

	return (size);
}
