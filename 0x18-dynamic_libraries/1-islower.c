#include "main.h"

/**
 * _islower - checks if the c is lowercase or not
 * displays 1 if input is lowercase character otherwise
 * shows 0.
 * @c: The character in ASCII code
 * Return: 1 fro lowercase character 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
