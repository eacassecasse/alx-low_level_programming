#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Custom function
 * @head: pointer to singly linked list
 *
 * Description: Sums the data of all the nodes on a linked list
 * Return: The sum of data or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
