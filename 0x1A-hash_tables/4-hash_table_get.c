#include "hash_tables.h"

/**
 * hash_table_get - gets a value associated with a key
 *
 * @ht: the hash table to look into
 * @key: the key to which the value is associated
 *
 * Return: value associated with element or NULL if key not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((unsigned const char *) key, ht->size);

	if (index >= ht->size)
		return (NULL);

	temp = ht->array[index];
	while (temp && strcmp(temp->key, key) != 0)
		temp = temp->next;

	return (temp ? temp->value : NULL);
}
