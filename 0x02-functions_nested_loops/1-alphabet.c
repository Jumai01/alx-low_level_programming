#include "main.h"
/**
 * main - Entry Level
 * Description - functions that prints the aphabet in lowwer case
 * Return: Returns 0 Always
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
		_putchar('\n');
	}
}

