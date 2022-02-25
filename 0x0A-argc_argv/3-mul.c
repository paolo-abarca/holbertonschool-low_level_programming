#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: int
 * @argv: char
 * Return: 0
 */

int main(int argc, char **argv)
{

	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
