#include "hash_tables.h"

/**
 * hash_djb2 - function used to hash a string to an int
 *
 * @str: char pointer containig string to be hashed
 * Return: unsigned long integer representing the hash of the
 * string
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
