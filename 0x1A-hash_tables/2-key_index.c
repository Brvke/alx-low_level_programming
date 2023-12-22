#include "hash_tables.h"

/**
 * key_index - function to calculate the index a given key corresponds
 * to given the key and the size fo the hash table
 * @key: key to be indexed
 * @size: the size of the hash table for which the index is calcualted
 * Return: The index at which the key value pair should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
