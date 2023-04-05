#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: The string that needs to be printed
 * Return: Always return 0
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
