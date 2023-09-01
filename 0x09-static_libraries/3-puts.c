#include "main.h"
#include <string.h>
/**
 * _puts - prints string to standard output
 * @str: string inpit for function
 * Return: 0 if sucsess;
*/
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] >= 0; i++)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[i]);
	}
}
