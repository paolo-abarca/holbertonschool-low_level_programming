#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function pointer
 * @s1: char pointer
 * @s2: char pointer
 * @n: unsigned int
 * Return: p
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int lens1, lens2;

	for (lens1 = 0; s1[lens1]; lens1++)
	{}
	for (lens2 = 0; s2[lens2]; lens2++)
	{}

	if (n >= lens2)
	{
		p = malloc(sizeof(char) * (lens1 + lens2 + 1));

		for (lens1 = 0; s1[lens1]; lens1++)
		{
			p[lens1] = s1[lens1];
		}
		for (lens2 = 0; s2[lens2]; lens2++)
		{
			p[lens1 + lens2] = s2[lens2];
		}
		p[lens1 + lens2] = s2[lens2];

		return (p);
	}

	else
	{
		for (lens2 = 0; lens2 < n; lens2++)
		{}
	}

	p = malloc(sizeof(char) * (lens1 + lens2 + 1));

	if (p == NULL)
		return (NULL);

	else
	{
		for (lens1 = 0; s1[lens1]; lens1++)
		{
			p[lens1] = s1[lens1];
		}
		for (lens2 = 0 ; s2[lens2] != s2[n]; lens2++)
		{
			p[lens1 + lens2] = s2[lens2];
		}
		p[lens1 + lens2] = '\0';
	}

	return (p);
}
