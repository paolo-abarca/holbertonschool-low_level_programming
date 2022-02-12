#include <stdio.h>

/**
 * main - print factor of 612852475143
 * Return: 0 if successful
 */

int main(void)
{
	unsigned long int j, min;

	j = 612852475143;
	min = 2;
	while (j != min)
	{
		if (j % min == 0)
			j = j / min;
		else
			min++;
	}
	printf("%lu\n", j);
	return (0);
}
