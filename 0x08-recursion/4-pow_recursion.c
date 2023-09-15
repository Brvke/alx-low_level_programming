#include "main.h"
/**
 * _pow_recursion - calcutales x to power of y
 *
 * @x: base
 * @y: power
 *
 * Return: power of y to  base x
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else if (y < 0)
		return (-1);

	return (x * _pow_recursion(x, y - 1));
}
