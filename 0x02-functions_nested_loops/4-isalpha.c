#include "main.h"
/**
 * _isalpha - functions that checks for alphabet
 *
 * @c: parameter to be checked
 * Return: 1 if it is true, and 0 if it is false
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

