#include "main.h"

/**
 * leet - prototype
 * @s: pointer
 * Return: s
 */

char *leet(char *s)
{
	int i, x;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
	for (x = 0; x < 10; x++)
	{
	if (s[i] == a[x])
	{
	s[i] = b[x];
	}
	}
	}

	return (s);
}
