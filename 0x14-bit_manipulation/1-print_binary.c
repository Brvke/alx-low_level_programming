#include <stdio.h>
#include <stdbool.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: Number to be printed in binary
 *
 * Return: Converted number.
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask;
	bool cur;
	bool sig = false;

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (mask)
	{
		cur = n & mask;

		if (cur && !sig)
			sig = true;

		if (sig)
			_putchar(cur ? '1' : '0');

		mask >>= 1;
	}

	if (!sig)
		_putchar('0');
}
