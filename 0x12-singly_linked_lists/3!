#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Custom function
 * @head: pointer to singly linked list
 *
 * Description: Frees the linked list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
