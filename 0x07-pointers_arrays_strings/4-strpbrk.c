#include <stdlib.h>
#include "main.h"

/**
 * _strpbrk - prototype pointer
 * @s: pointer
 * @accept: pointer
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	char *a;

	for ( ; *s; s++)
	{
		for (a = accept; *a != '\0'; a++)
		{
			if (*a == *s)
			{
				return (s);
			}
		}
	}

	return (NULL);
}
