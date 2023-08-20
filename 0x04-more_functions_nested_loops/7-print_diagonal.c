#include "main.h"

/**
 * print_daigonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 * Return: 0
 */

void print_daigonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				for (j = 0 ; j <= i ; j++)
					_putchar(' ');
				_putchar('\\');
				_putchar('\n');
			}
		}
	}
}
