#include "main.h"

/**
 * _isupper - checks if parameter c represents a character
 * @c: int representing a character
 * Return: Alwyas return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
