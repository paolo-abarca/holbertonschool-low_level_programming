#include <stdlib.h>
#include "main.h"

/**
 * _strstr - prototype pointer
 * @haystack: pointer
 * @needle: pointer
 * Return: NULL
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int counter = 0;
	unsigned int size = 0;

	while (needle[size])
	{
		size++;
	}

	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j]; j++)
			{
				if (haystack[i + j] == needle[j])
				{
					counter++;
					if (counter == size)
					{
						return (&haystack[i]);
					}
					continue;
				}
				break;
			}
		}
		i++;
	}
	return (0);
}
