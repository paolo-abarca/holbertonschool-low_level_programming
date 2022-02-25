#include <stdio.h>
#include <stdlib.h>

/**
 * is_number - prototype
 * @argv: pointer
 * Return: 1
 */

int is_number(char *argv)
{
	char *p = argv;
	int flag = 0;

	for ( ; *p != '\0'; p++)
	{
		if (flag == 0 && *p == 45)
		{
			flag = 1;
			continue;
		}
		flag = 1;

		if (*p >= 48 && *p < 58)
		{}
		else
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - function
 * @argc: int
 * @argv: char
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int sum;

	for (i = 1; i < argc; i++)
	{
		if (is_number(argv[i]) == 1)
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
