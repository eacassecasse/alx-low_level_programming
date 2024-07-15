#include "lists.h"
#include <stdio.h>

/**
 * print_list - Custom function
 * @h: pointer to singly list node
 *
 * Description: Prints all the elements of the linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
