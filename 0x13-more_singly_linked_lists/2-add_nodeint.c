#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Custom function
 * @head: pointer to singly linked list head
 * @n: value of the node
 *
 * Description: Adds a new element on the head of the linked list
 * Return: Address of the new node or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = (*head);

	(*head) = new;

	return (*head);
}
