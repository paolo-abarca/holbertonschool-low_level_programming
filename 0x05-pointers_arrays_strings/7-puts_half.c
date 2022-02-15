#include "main.h"

/**
 * puts_half - prototype
 * @str: variable
 */

void puts_half(char *str)
{
	int i, a;

	for (i = 0; str[i] != '\0'; i++)
	{}

	for (a = i / 2; a < i; a++)
	{
	_putchar (str[a]);
	}
	_putchar (10);
}
