#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = '1';

	for (ch = 'a'; ch <= 'z'; ch++)

	{
	if (ch != 'e' && ch != 'q')

	putchar(ch);
	}
	putchar('\n');

	return (0);
}
