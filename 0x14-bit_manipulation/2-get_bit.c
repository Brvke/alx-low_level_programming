#include "main.h"
/**
* get_bit - gets bit at index index from n
* @n: index
* @index: index to be compare
* Return: returns 1 if bit value at index or -1 if faliure
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 8 * sizeof(unsigned int))
		return (-1);
	if (n & 1 << index)
		return (1);
	else
		return (0);
}
