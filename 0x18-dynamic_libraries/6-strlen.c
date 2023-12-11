#include "main.h"

/**
 * _strlen - takes a pointer to a sting as input and returns the length
 * of the string.
 *
 * @s: string pointer.
 *
 * Return: the length of the string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
