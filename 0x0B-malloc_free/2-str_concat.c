#include "main.h"
/**
* str_concat - conactasts string s1 & s2
* @s1: string 1
* @s2: string 2
* Return: null if k is null or pointer if not
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, a, b;
	char *k;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	for (i = 0 ; s1[i] != '\0' ; i++)
		;
	for (j = 0 ; s2[j] != '\0' ; j++)
		;
	k = malloc((i * sizeof(char)) + ((j + 1) * sizeof(char)));
	if (k == NULL)
		return (NULL);
    /*return variables ot zero and use them to conacte values of  s1 & s2*/
	a = b = 0;
	while (s1[a] != '\0')
	{
	k[a] = s1[a];
	a++;
	}
	while (s2[b] != '\0')
	{
		k[a + b] = s2[b];
		b++;
	}
	k[i + j] = '\0';
	return (k);
}
