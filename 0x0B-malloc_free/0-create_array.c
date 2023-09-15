#include "main.h"
/**
 * create_array - creates an array of size with character c
 * @size: unsigned int
 * @c: char
 * Return: null if size is 0 and ptr to first memory character if not
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = (char *) malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; i < size; i++)
	{
		*(ptr + i) = c;
	}
	if (size == 0)
	{
		return (NULL);
	}
	else
		return (ptr);
}
