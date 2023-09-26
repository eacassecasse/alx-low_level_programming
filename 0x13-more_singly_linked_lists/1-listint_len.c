#include "lists.h"

/**
 * listint_len - Custom function
 * @h: pointer to singly linked list
 *
 * Description: Counts the elements of the linked list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		h = h->next;
		s++;
	}

	return (s);
}
