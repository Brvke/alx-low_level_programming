#include <stdio.h>

/**
 * main - entry point
 *
 * Return: success 0
 */

int main(void)
{
	char A = 'a';

	while (A <= 'z')
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}
