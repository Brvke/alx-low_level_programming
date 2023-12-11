#include "main.h"

/**
 * _strncat - concatenates two strings up to the character
 * at the number passed
 * @dest: destination.
 * @src: source.
 * @n: number of character to append to dest
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 < n)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
