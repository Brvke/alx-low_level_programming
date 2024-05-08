#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Function to search for value in array using
 * the jump search algorithm
 *
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to be serached for.
 *
 * Return: First index where value is located in array. 0 if not found
 * or array is empty.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t count, step, min, max;

	if (!array)
		return (-1);

	step = sqrt(size);
	min = 0;
	max = step;

	printf("Value checked array[%ld] = [%d]\n", min, array[min]);

	while (array[max] < value && max < size)
	{
		min += step;
		max += step;
		printf("Value checked array[%ld] = [%d]\n", min, array[min]);
	}
	printf("Value found between index [%ld] and [%ld]\n", min, max);

	for (count = min; count <= max; count++)
	{
		if (count > size - 1)
			break;
		printf("Value checked array[%ld] = [%d]\n", count, array[count]);
		if (array[count] == value)
			return (count);
	}

	return (-1);
}
