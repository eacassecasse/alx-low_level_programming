#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Custom function
 * @head: pointer to singly linked list
 *
 * Description: Frees the linked list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
