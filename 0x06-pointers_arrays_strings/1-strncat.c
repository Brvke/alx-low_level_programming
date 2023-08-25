#include "main.h"
/**
 * _strncat - appendes string src to the end of dest upto nth char
 * @dest: first  string
 * @src: secondstring
 * @n: number of bytes
 * Return: the total string value
*/
char *_strncat(char *dest, char *src, int n)
{
	int l = 0;
	int i;

	for (i = 0 ; dest[i] != '\0' ; i++)
		l++;

	for (i = 0 ; i < n && *src != '\0' ; i++)
	{
		dest[l + i] = *src;
		src++;
	}
	dest[l + i] = '\0';
	return (dest);
}
