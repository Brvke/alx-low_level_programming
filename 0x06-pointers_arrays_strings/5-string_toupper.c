#include "main.h"
/**
* string_toupper - converts smallcase chracter to uppercase
*
* @str: string whose character to convert
*
* Return: converted string or null
*/
char *string_toupper(char *str)
{
	int i;

	i = 0;
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] >=  97 && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
