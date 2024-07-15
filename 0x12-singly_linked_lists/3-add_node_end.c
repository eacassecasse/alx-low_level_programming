#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Custom function
 * @head: pointer to pointer to singly list
 * @str: the string to on the new node
 *
 * Description: Adds a new node on the tail of the linked list
 * Return: The new node address or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
