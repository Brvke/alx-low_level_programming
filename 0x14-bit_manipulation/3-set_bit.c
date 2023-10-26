#include "main.h"

/**
* set_bit - sets the bit at a given index to 1
* @n: int
* @index: bit index
* Return: returns 1 if successful or -1 if failure
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 8 * sizeof(unsigned long int))
		return (-1);

	*n = *n | 1 << index;
	return (1);
}
