#include "search_algos.h"

/**
 * interpolation_search - Function to search for value in array
 * @array: pointer to the first element of the array to search.
 * @size: number of elements in array.
 * @value: value to serch for.
 * Return: First index of value in array if exists -1 otherwise.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, mid, high;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;

	while (low < high)
	{
		mid = low + (((double)(high - low) / (array[high] - array[low])
		) * (value - array[low]));

		if (mid > size - 1)
		{
			printf("Value checked array[%ld] is out of range\n", mid);
			break;
		}

		printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);
		if (array[mid] == value)
			return (mid);

		else if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
	}

	return (-1);
}
