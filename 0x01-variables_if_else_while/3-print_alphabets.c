#include <stdio.h>

/**
 * main - entry point
 *
 * Return: success 0
 */

int main(void)
{
	char a;

	char A;

	for (A = 'a'; A <= 'z'; A++)
	{
		putchar(A);
	}
	for (a = 'A'; a <= 'Z' ; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
