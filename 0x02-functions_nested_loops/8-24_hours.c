#include "main.h"

/**
 * jack_bauer - prints every min of the day
 * Return: void
 */

void jack_bauer(void)
{
	int j, b;

	for (j = 0 ; j < 24 ; j++)
	{
		for (b = 0 ; b < 60 ; b++)
		{
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar(':');
			_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
			_putchar('\n');
		}
	}
}
