#include <stdlib.h>
#include "main.h"

/**
 * _strstr - prototype pointer
 * @haystack: pointer
 * @needle: pointer
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i;
	unsigned int j;
	unsigned int counter = 0;
	unsigned int size;

	for (size = 0; needle[size]; size++)
	{}
	for (i = 0; haystack[i]; i++)
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
	}
	return (0);
}
