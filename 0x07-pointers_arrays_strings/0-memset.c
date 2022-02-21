#include "main.h"

/**
 *
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	for ( ; n > 0; s++, n--)
	{
		*s = b;
	}

	return (s);
}
