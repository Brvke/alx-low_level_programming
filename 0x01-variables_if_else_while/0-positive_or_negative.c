#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C program that prints with printf function.
 *
 * Return: Always 0 (Success)
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

