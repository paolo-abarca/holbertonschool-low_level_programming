#include "function_pointers.h"

/**
 * array_iterator - function void
 * @array: int
 * @size: size_t
 * @action: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;

	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
