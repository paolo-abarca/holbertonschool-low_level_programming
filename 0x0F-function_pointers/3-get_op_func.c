#include "3-calc.h"

/**
 * get_op_func - searchs for an integer
 * @s:string
 * Return: no return
 */

int (*get_op_func(char *s))(int, int)
{
		op_t ops[] = {
		{"*", op_mul},/* {"+", op_add} */
		{"-", op_sub},
		{"/", op_div},
		{"+", op_add},/* {"+", op_div} */
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (i < 5)
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
