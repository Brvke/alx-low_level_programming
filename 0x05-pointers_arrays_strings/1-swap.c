#include "main.h"

/**
 * swap_int - swaps the value of the two variables mentioned by pointers
 * @a: pointer
 * @b: pointer
 * Results: void
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b, *b = c;
}
