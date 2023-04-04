#include "main.h"
/**
 * _memcpy - input function
 * @dest:a destination pointer
 * @src: a source pointer
 * @n: number of bytes to copy
 * Return: return to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
