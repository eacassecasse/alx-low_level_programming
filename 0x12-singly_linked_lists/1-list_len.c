#include <stddef.h>
#include "lists.h"

/**
 * list_len - Custom function
 * @h: pointer to singly list node
 *
 * Description: get the number of elements of the linked list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
