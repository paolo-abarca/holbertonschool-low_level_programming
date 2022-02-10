#include "main.h"

/**
 * _isupper - check if it is uppercase
 * @c: letter in question
 * Return: 1 if it is uppercase or 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
