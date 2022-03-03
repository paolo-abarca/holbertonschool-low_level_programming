#include "main.h"
#include <stdlib.h>

/**
 * array_range - function pointer
 * @min: int
 * @max: int
 * Return: p
 */

int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (min + max + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		p[i] = min++;

	return (p);
}
