#include "main.h"

/**
 * flip_bits - returns the number of bits to flip
 * @n: decimal number
 * @m: decimal number
 * Return: number of bits to flip to get @m from @n
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int sum = 0;
	unsigned long int exc;

	exc = n ^ m;

	do {
		sum += (exc & 1);
		exc >>= 1;
	} while (exc > 0);

	return (sum);
}