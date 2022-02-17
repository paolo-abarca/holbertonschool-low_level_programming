#include "main.h"

/**
 * _strcat - prototype
 * @dest: pointer
 * @src: pointer
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, a;

	for (i = 0; dest[i] != '\0'; i++)
	{}

	for (a = 0; src[a] != '\0'; a++, i++)
	{
	dest[i] = src[a];
	}
	dest[i] = '\0';

	return (dest);
}
