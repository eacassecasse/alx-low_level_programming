#include "hash_tables.h"

/**
 * hash_table_set - Insert or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add.
 * @value: The value associated with key.
 *
 * Return: 0 - In case of success.
 *         1 - Otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *aux;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	aux = strdup(value);
	if (aux == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = aux;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(aux);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = aux;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
