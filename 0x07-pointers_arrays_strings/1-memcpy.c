#include "main.h"
/**
 * _memcpy - copyes from src to dest till n
 * @dest: destination
 * @src: source
 * @n: to be copied till
 *
 * Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;
	char *i;

	i = dest;
	for (j = 0; j < n; j++)
	{
		*i = src[j];
		i++;
	}
	return (dest);
}
