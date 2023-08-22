#include "main.h"

/**
 * print_rev - prints the reverse of a srting
 * @s: input string
 * Return: void
*/
void print_rev(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; ++index)
		;

	for (--index; index >= 0; --index)
		putchar(s[index]);
	putchar('\n');
}
