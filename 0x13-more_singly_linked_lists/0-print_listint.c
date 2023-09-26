#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Custom function
 * @h: pointer to singly linked list
 *
 * Description: Prints all the elements of the linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		s++;
	}

	return (s);
}
