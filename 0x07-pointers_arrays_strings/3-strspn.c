#include "main.h"

/**
 * _strspn - unsigned int prototype
 * @s: pointer
 * @accept: pointer
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	char *a = accept;
	int flag = 1;
	unsigned int count = 0;

	for ( ; *s; s++)
	{
		flag = 0;
		for (a = accept; *a != '\0'; a++)
		{
			if (*a == *s)
			{
				flag = 1;
				count++;
				break;
			}
		}
		if (flag == 0)
		return (count);
	}
	return (count);
}
