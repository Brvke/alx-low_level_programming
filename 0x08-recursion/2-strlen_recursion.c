#include "main.h"
/**
 * _strlen_recursion - counts string length
 * @s: string to be counted
 * Return: lenght of string
*/
int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
		return (0);

	i = 0;
	i++;
	return (i + _strlen_recursion(s + 1));
}
