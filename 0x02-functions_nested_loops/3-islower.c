#include "main.h"

/**
 * _islower - checks for lowercase alphabet
 * @c: character to be checked
 * Return: if character is lowercase, otherwise
 */

int_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
