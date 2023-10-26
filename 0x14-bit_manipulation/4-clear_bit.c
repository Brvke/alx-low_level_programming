#include "main.h"

/**
* clear_bit - sets the bit at a given index to 0
* @n: int
* @index: bit index
* Return: returns 1 or -1 if it failure
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 8 * sizeof(unsigned long int))
		return (-1);
	/* first set bit at index to one*/
	*n = *n | 1 << index;
	/* then use xor to clear the bit */
	*n = *n ^ 1 << index;
	return (1);
}
