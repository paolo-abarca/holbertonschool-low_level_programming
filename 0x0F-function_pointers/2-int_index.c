#include "function_pointers.h"

/**
 * int_index - function
 * @array: int
 * @size: int
 * @cmp: int
 * Return: -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		return (i);
	}
	if (i == size)
		return (-1);

	return (-1);
}
