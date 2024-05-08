#include "search_algos.h"
void print_array(int *array, size_t size)
/**
 * binary_search - searches for a value in a sorted array of
 *                 integers using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size:  is the number of elements in @array
 * @value: is the value to search for
 * Return: the index where value is located
 *          If value is not present in array or if array is NULL,
 *           your function must return -1
*/
int binary_search(int *array, size_t size, int value)
{
	size_t idx;
	int result;

	if (size == 0 || array == NULL)
	{
		return (-1);
	}
	print_array(array, size);
	idx = size / 2;

	if (array[idx] == value)
	{
		return (idx);
	}
	else if (array[idx] < value)
	{
		if (size % 2 == 0)
			result = binary_search(&array[idx], size / 2, value);
		else
			result = binary_search(&array[idx + 1], size / 2, value);
		if (result == -1)
			return (-1);
		return (result + idx);
	}
	else if (array[idx] > value)
	{
		if (size % 2 != 0)
			return (binary_search(array, size / 2, value));
		else
			return (binary_search(array, (size / 2) - 1, value));
	}

	return (-1);
}
/**
 * print_array - prints a int array
 * @array: pointer to fist array element
 * @size: size of array
*/
void print_array(int *array, size_t size)
{
	size_t idx;

	printf("Searching in array: ");
	for (idx = 0; idx < size; idx++)
	{
		printf("%d", array[idx]);
		if (idx != size - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
