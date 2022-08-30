#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 *
 * @array: is a pointer to the first element of the array to search
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: If array is NULL, your function must return -1
 */

int linear_search(int *array, size_t size, int value)
{
	int i;
	int count = size;

	if (array == NULL)
		return (-1);

	for (i = 0; i < count; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			return (i);
		}

		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}
	return (-1);
}
