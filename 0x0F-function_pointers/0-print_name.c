#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function
 * @name: char pointer
 * @f: void pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;

	if (f == NULL)
		return;

	f(name);
}
