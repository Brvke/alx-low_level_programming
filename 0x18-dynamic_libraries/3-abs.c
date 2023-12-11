#include "main.h"

/**
 * _abs - returns the absolute value of the n
 *
 * @n: The number to be checked
 *
 * Return: The absolute value of the number
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	else
	{
		return (n);
	}
}
