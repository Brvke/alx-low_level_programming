#include "main.h"

/**
 * _strspn- searces for character c in array s
 *
 * @s: array to be searched
 * @accept: character to be searched
 *
 * Return: NULL if no character found or adress if found
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j, f;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		f = 1; /*flag status*/
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				f = 0; /*success*/
				break;
			}
			j++;
		}
		if (f == 1)
			break;
		i++;
	}
	return (i);
}
