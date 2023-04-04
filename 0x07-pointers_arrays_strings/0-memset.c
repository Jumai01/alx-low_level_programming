#include "main.h"

/**
 * _memset - fill memory with const
 * @s: pointer to the block of memory
 * @b: value to be set
 * @n: no of bytes to be set
 * Return: reyurn pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
