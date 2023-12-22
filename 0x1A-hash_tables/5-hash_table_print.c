#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table pointed to by
 * ht
 *
 * @ht: pointer to the hash table to be printed
 *
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int index;
	unsigned char comma_flag = 0;

	if (!ht)
		return;
	
	
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index])
		{
			if (comma_flag)
				printf(", ");

			node = ht->array[index];
			while (node)
			{
				printf("'%s: '%s'", node->key, node->value);
				node = node->next;
				if (node)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
