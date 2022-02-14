#include "main.h"

/**
 * _strlen - prototype
 * @s: pointer
 * Return: int i
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}

	return (i);
}
