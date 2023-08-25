#include "main.h"
/**
 * _strcmp - compars(ascii) two stings
 * @s1: string one
 * @s2: string two
 * Return: return postive if s1 is greater,
 *         negative if s2 is greater or,
 *         zero if equal
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0 ; s1[i] != '\0' || s2[i] != '\0' ; i++)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] < s2[i])
				return (s1[i] - s2[i]);
			else if (s2[i] < s1[i])
				return (s1[i] - s2[i]);
		}
	}
	return (0);
}
