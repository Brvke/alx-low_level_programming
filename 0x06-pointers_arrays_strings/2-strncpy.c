#include "main.h"
/**
* _strncpy - copies n characters from src to dest
* @dest: destination string
* @src: source array
* @n: numbers of caracters to be copied from src
* Return: It returns string dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
