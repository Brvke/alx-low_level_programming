#include "main.h"
/**
 * *_strcat - appendes string src to the end of dest upto nth char
 * @dest: first  string
 * @src: secondstring
 * Return: the total string value
*/
char *_strcat(char *dest, char *src)
{
	int dl = 0;
	int sl = 0;
	int i;

	for (i = 0 ; dest[i] != '\0' ; i++)
		dl++;
	for (i = 0 ; src[i] != '\0' ; i++)
		sl++;
	for (i = 0 ; i <= sl ; i++)
		dest[dl + i] = src[i];
	return (dest);
}
