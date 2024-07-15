#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Custom function
 * @head: pointer to singly linked list head
 *
 * Description: Frees the linked list
 * Return: head data or 0 otherwise
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!head || !(*head))
		return (0);

	data = (*head)->n;

	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}
