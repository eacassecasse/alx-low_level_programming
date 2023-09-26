#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Custom function
 * @head: pointer to singly linked list
 * @idx: position of where to add the node
 * @n: data of the new node 
 *
 * Description: Adds a new node by index on a linked list
 * Return: Address of the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (temp && i < idx)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}

		temp = temp->next;
		i++;
	}

	return (NULL);
}
