#include "hash_tables.h"

/**
 * hash_table_delete - Delete a hash table.
 * @ht: A pointer to a hash table.
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *aux;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				aux = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = aux;
			}
		}
	}
	free(head->array);
	free(head);
}
