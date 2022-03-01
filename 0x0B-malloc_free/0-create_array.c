#include "main.h"
#include <stdlib.h>

/**
 * create_array - function pointer
 * @size: unsigned int
 * @c: char
 * Return: p
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);

	p = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	p[i] = c;
	return (p);
}
