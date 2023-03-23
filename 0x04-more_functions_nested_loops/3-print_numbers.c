#include "main.h"
/**
 * print_numbers - function that prints number 0-9 followed by a new line
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar (i);
	}
	putchar ('\n');
}
