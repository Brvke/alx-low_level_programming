#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: success 0
 */
int main(void)
{
	int a;
	char A;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + 48);
	}
	for (A = 'a'; A <= 'f'; A++)
	{
		putchar(A);
	}
	putchar('\n');
	return (0);
}
