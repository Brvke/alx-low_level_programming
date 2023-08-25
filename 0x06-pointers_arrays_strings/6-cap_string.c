#include "main.h"
/**
* cap_string - capitalizes all words of a string
*
* @str: input string
*
* Return: capitalized string or null
*/
char *cap_string(char *str)
{
	int i, j;
	char reference[13] = {' ', '\n', ',', ';', '.', '!', '?', '"', '(', ')',
			123, 125, 9};

	i = 0;
	if (str == NULL)
		return (NULL);

	if (str[0] >=  97 && str[0] <= 122)
		str[0] = str[0] - 32;

	while (str[i] != '\0')
	{
		for (j = 0 ; reference[j] != '\0' ; j++)
		{
			if (str[i] == reference[j])
			{
				if (str[i] == 9)
				{
					str[i] = ' ';
				}
				if (str[i + 1] >=  97 && str[i + 1] <= 122)
				{
					i++;
					str[i] = str[i] - 32;
				}
			}
		}
		i++;
	}
	return (str);
}
