#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - Custom function
 * @head: pointer to singly linked list
 *
 * Description: Reverses the elements of the linked list
 * Return: First element  of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
