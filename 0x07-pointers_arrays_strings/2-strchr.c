#include "main.h"

/**
 * _strchr - searches a character in a string
 * @s: string input
 * @c: character to find
 * Return: return pointer to 0
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	if (*s == c)
	{
		return (s);
	}
	s++;

	if (c == '\0')
	{
	return (s);
	}
	return (NULL);
}

