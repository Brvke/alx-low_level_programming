#include "main.h"
/**
 * _isdigit - checks if parameter is a number
 * @c: input character.
 * Return: 1 if is an uppercase char, o otherwise.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
