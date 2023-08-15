#include <stdio.h>
/**
 * main- entry point
 *
 * Return: sucess 0
 *
*/

int main(void)
{
	char A = 'a';

	while (A <= 'z')
	{
		if (A <= 'z' && A != 'e' && A != 'q')
		{
			putchar(A);
			A++;
		}
		else if (A == 'e')
		{
			A++;
		}
		else if (A == 'q')
		{
			A++;
		}
	}
	putchar('\n');
	return (0);
}
