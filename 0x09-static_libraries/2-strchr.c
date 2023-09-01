#include "main.h"

/**
 * _strchr - searces for character c in array s
 *
 * @s: array to be searched
 * @c: character to be searched
 *
 * Return: NULL if no character found or adress if found
*/
char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
		s++;
	if (*s == c)
		return (s);
	else
		return (0);
}
