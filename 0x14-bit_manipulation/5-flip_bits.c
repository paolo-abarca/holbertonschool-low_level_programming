#include "main.h"

/**
 * flip_bits - function unsigned int
 *
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: i
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	unsigned long int i;

	xor = n ^ m;
	for (i = 0; xor != '\0'; )
	{
		if (xor & 1)
		i++;

		xor >>= 1;
	}
	return (i);
}
