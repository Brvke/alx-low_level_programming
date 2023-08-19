#include "main.h"

/**
 * print_last_digit - prints last digit
 * @l: parameter function
 * Return: d
 */

int print_last_digit(int l)
{
	int d;

	d = l % 10;
	if (l < 0)
		d = -d;
	_putchar(d + '0');
	return (d);
}
