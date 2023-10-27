#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number
 * @index: index to set the value of bit to 1
 * Return: 1 if it worked OR -1 if it failed
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	mask <<= index;

	*n = (*n | mask);

	return (1);
}
