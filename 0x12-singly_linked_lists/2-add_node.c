#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Custom function
 * @head: pointer to pointer to singly list
 * @str: the string to on the new node
 *
 * Description: Adds a new node on the head of the linked list
 * Return: The new node address or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
