#include "search_algos.h"

void print_int_array(int *array, size_t size, size_t lower, size_t higher);
/**
 * exponential_search - Function to search for value in array using the
 * exponential search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 * Return: first index of value in array if exists, -1 otherwise.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t min, max, mid;

	if (!array)
		return (-1);

	if (array[0] == value)
		return (0);

	min = 1;
	max = 2;

	printf("Value checked array[%ld] = [%d]\n", min, array[min]);

	while (array[max] < value)
	{
		min = max;
		max *= 2;
		printf("Value checked array[%ld] = [%d]\n", min, array[min]);
		if (max > size - 1)
		{
			max = size - 1;
			break;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n", min, max);

	while (min < max)
	{
		mid = ((min + max)) / 2;
		printf("Searching in array: ");
		print_int_array(array, size, min, max);
		printf("\n");
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			min = mid + 1;
		else if (array[mid] > value)
			max = mid - 1;
	}

	return (-1);
}

/**
 * print_int_array - Function to print an int array
 * @array: array to be printed.
 * @size: size of array to be printed.
 * @lower: lower limit to start printing.
 * @higher: higher limit to stop printing.
 * Return: Noting.
 */
void print_int_array(int *array, size_t size, size_t lower, size_t higher)
{
	size_t count;

	for (count = 0; count < size; count++)
	{
		if (count >= lower && count < higher)
			printf("%d, ", array[count]);
		else if (count == higher)
			printf("%d ", array[count]);
		else if (count > higher)
			break;
	}
}
