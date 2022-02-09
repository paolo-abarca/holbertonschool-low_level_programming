#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @c: int
 * Return: the last digit
 */

int print_last_digit(int c)
{
	int toreturn;
	int toprint;

	if (c < 0)
	{
		c = c + 10;
		c = c * -1;
	}

	toprint = c % 10;
	toreturn = toprint;

	_putchar(toprint + 48);
	return (toreturn);
}
