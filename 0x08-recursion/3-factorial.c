#include "main.h"
/**
 * factorial - computes factorial
 *
 * @n: factorial
 *
 * Return: a factorial of n
*/
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
