#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Custom function
 * @head: pointer to singly linked list head
 * @n: value of the node
 *
 * Description: Adds a new element on the tail of the linked list
 * Return: Address of the new node or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp = *head;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new;

	return (new);
}
