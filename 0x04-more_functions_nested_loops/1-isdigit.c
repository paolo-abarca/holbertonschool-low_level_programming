#include "main.h"

/**
 * _isdigit - check if c is a digit or not
 * @c: character if it is a digit or not
 * Return: 1 if c is a digit or 0 if it is not.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
