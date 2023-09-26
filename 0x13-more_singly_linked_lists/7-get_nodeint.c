#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Custom function
 * @head: pointer to singly linked list
 * @index: position of where to get the node
 *
 * Description: Gets a node by index on a linked list
 * Return: A node on the given position or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int curPos = 0;

	while (head)
	{
		if (curPos == index)
		{
			return (head);
		}

		head = head->next;
		curPos++;
	}

	return (NULL);
}
