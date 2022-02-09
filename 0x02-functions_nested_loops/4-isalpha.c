#include "main.h"

/**
 * _isalpha - check if it is lowercase or uppercase
 * @c: charactec
 * Return: 1 if c is lowercase or uppercase
 */

int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
