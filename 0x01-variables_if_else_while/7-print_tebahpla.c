#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: success 0
 */
int main(void)
{
	int Z;

	for (Z = 'z'; Z >= 'a'; Z--)
	{
		putchar(Z);
	}
	putchar('\n');
	return (0);
}
