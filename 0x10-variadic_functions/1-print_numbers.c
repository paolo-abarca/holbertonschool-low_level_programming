#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - function
 * @separator: const char
 * @n: const unsigned int
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int valores;

	va_list parametros;

	va_start(parametros, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			return;

		valores = va_arg(parametros, int);

		if (i == 0)
			printf("%d", valores);
		else
			printf("%s%d", separator, valores);
	}
	va_end(parametros);
	printf("\n");
}
