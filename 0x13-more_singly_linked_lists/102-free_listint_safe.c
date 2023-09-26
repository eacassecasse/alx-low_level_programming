#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - Custom function
 * @head: pointer to singly linked list
 *
 * Description: Prints the elements of the linked list
 * Return: The number of nodes on the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *cur, *next;

	if (!h || !*h)
		return (0);

	cur = *h;

	while (*h)
	{
		len++;
		next = cur->next;

		if (next >= cur)
		{
			free(cur);
			break;
		}

		free(cur);
		cur = next;
	}

	*h = NULL;

	return (len);
}
