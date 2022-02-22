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
	char *vodka = needle;
	int flag = 0;
	unsigned int count = 0;

	while (*haystack)
	{
		while (*vodka != '\0')
		{
			flag = 0;
			if (*vodka == *haystack)
			{
				flag = 1;
				count++;
			}
			if (flag == 0)
			break;
			vodka++;
		}
		haystack++;
	}
	if (*vodka == '\0')
		return (needle);

	return (NULL);
}
