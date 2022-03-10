#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - function
 * @format: const
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	int valor_c, valor_i;
	double valor_f;
	char *valor_s;
	char *separator = ", ";

	va_list parametros;

	va_start(parametros, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					valor_c = va_arg(parametros, int);
					printf("%c", valor_c);
					break;
				case 'i':
					valor_i = va_arg(parametros, int);
					printf("%s%d", separator, valor_i);
					break;
				case 'f':
					valor_f = va_arg(parametros, double);
					printf("%s%f", separator, valor_f);
					break;
				case 's':
					valor_s = va_arg(parametros, char *);
					if (valor_s == NULL)
						valor_s = "(nil)";
					printf("%s%s", separator, valor_s);
					break;
			}
			i++;
		}
	}
	va_end(parametros);
	printf("\n");
}
