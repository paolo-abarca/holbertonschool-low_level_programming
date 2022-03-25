#include "main.h"

/**
 * set_bit - function int
 *
 * @n: unsigned long int
 * @index: unsigned int
 * Return: 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	i = 1 << index;

	if (index > 63)
		return (-1);

	*n = *n + i;

	return (1);
}
