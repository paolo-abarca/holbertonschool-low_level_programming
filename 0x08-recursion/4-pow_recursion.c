#include "main.h"

/**
 * _pow_recursion - prototype recursive
 * @x: int
 * @y: int
 * Return: -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);

	else if (y == 0)
	return (1);

	return (x * _pow_recursion(x, y - 1));
}
