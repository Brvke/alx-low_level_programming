#include "main.h"
#include <stdio.h>
/**
 * _strpbrk- does similar work as strpbrk
 *
 * @s: array to be searched
 * @accept: character to be searched
 *
 * Return: string staring from first cahracter found
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);

			j++;
		}
		i++;
	}
	return ('\0');
}
