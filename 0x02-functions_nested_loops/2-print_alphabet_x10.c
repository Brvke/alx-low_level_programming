#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lowercase ten times
 *
 *
 */

void print_alphabet_x10(void)
{
	int tentimes;
	char alphabetlow10x;

	for (tentimes = 0 ; tentimes < 10 ; tentimes++)
	{
		for (alphabetlow10x = 'a' ; alphabetlow10x <= 'z' ; alphabetlow10x++)
			_putchar(alphabetlow10x);
	}
	_putchar('\n');
}
