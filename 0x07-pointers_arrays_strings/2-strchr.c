#include <stdlib.h>
#include "main.h"

/**
 * _strchr - prototype pointer
 * @s: pointer
 * @c: pointer
 * Return: NULL
 */

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (s);
		}}

	while (*s++);

	return (NULL);
}
