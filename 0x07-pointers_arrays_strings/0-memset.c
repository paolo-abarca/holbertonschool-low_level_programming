#include "main.h"

/**
 * _memset - prototype pointer
 * @s: pointer
 * @b: char
 * @n: unsigned in
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
