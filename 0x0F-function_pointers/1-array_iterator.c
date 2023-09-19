#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - calls a function
 * @array: integer array
 * @size: size of the array
 * @action: function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

	if (array && size && action)
	{
		for (i = 0 ; i < size; i++)
		{
			action(array[i]);
		}
	}
}
