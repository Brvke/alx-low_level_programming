#include "main.h"

/**
 * reverse_array - a function that reverses the
 *                content of an array of integers
 * @a: pointer to int array
 * @n: is the number of elements to swap
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int temp, ct;

	ct = 0;
	n = n - 1;
	while (ct <= n)
	{
		temp = a[ct];
		a[ct++] = a[n];
		a[n--] = temp;
	}
}
