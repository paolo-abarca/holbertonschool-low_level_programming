#include "main.h"

/**
 * _sqrt_recursion - prototype recursive
 * @n: int
 * Return: i
 */

int _sqrt_recursion(int n)
{
	int i = 1;

	if (n < 0)
		return (-1);
	else
		return (prototype(n, i));
}

/**
 * prototype - prototype recursive
 * @n: int
 * @i: int
 * Return: i
 */

int prototype(int n, int i)
{
	if ((i * i) == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	i++;
	return (prototype(n, i));
}
