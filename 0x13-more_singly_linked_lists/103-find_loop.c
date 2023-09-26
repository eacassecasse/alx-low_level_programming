#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * find_listint_loop - Custom function
 * @head: pointer to singly linked list
 *
 * Description: Finds all the loops inside of the linked list
 * Return: The address of nodes
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);

	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}

	return (NULL);
}
