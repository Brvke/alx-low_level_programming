#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the second string argument to the first string argument;
 *
 * @dest: destination array pointer.
 * @src: source array pointer.
 * Return: pointer to the destination.
 */
char *_strcpy(char *dest, char *src)
{
	int a, b = 0;

	for (a = 0; src[a] != '\0'; ++a)
	{
		dest[b] = src[a];
		++b;
	}
	dest[b] = '\0';

	return (dest);

}
