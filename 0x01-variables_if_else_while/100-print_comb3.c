#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print the value of n status:
 *              greater than, is zero and is not less than 6.
 *
 * Return: Always O (Success)
*/
int main(void)
{
	int A, B
		;
	for (A = 0; A <= 9; A++)
	{
		B = A + 1;
		for (; B <= 9; B++)
		{
			putchar(A + 48);
			putchar(B + 48);
			if (A != 8 || B != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
