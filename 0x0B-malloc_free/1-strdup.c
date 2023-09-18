#include "main.h"
/**
 * _strdup - function that crates space in memory for value of string
 *@str: string to be compared
 *Return: j or null
*/
char *_strdup(char *str)
{
	unsigned int i;
	char *j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; str[i] != '\0' ; i++)
	{
		;
	}
	j = malloc((i + 1) * sizeof(char));
	if (j == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		j[i] = str[i];
		i++;
	}
	return (j);
}

