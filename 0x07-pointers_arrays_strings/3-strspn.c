#include "main.h"

/**
 * _strspn - unsigned int prototype
 * @s: pointer
 * @accept: pointer
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	char *vodka = accept;
	int flag = 1;
	unsigned int count = 0;

	while (*s)
	{
		vodka = accept;
		flag = 0;
		while (*vodka != '\0')
		{
			if (*vodka == *s)
			{
				flag = 1;
				count++;
				break;
			}
			vodka++;
		}
		if (flag == 0)
		return (count);
		s++;
	}
	return (count);
}
