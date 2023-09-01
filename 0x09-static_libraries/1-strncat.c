#include "main.h"
/**
 * _strncat - appendes string src to the end of dest upto nth char
 * @dest: first  string
 * @src: secondstring
 * @n: stoping condition variable
 * Return: the total string value
*/
char *_strncat(char *dest, char *src, int n)
{
	int j, k;

	for (j = 0 ; dest[j] != '\0' ; ++j)
		;

	for (k = 0 ; k < n && src[k] != '\0' ; ++k)
		dest[j + k] = src[k];

	dest[j + k] = '\0';
	return (dest);
}
