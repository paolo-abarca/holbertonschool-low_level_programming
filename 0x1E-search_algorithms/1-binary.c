#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 *
 * @array:  is a pointer to the first element of the array to search
 * @size: is the number of elements in array
 * @value:  is the value to search for
 * Return: if array is NULL, your function must return -1
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		int middle = floor((left + right) / 2);

		if (array[middle] < value)
		{
			printf("Searching in array: ");
			print_array(array, left, right);
			left = middle + 1;
		}

		else if (array[middle] > value)
		{
			printf("Searching in array: ");
			print_array(array, left, right);
			right = middle - 1;
		}

		else
		{
			printf("Searching in array: ");
			print_array(array, left, right);
			return (middle);
		}
	}
	return (-1);
}

/**
 * print_array - function print array
 *
 * @array: is a pointer to the first element of the array to search
 * @first: is the first element
 * @last: is the last element
 * Return: void
 */

void print_array(int *array, int first, int last)
{
	while (first <= last)
	{
		if (first != last)
			printf("%d, ", array[first]);
		else
			printf("%d\n", array[first]);
		first++;
	}
}
