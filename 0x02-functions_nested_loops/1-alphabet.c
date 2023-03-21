#include "main.h"
/**
 * main - Entry Level
 * Description - prints the alhabet in lowwer case
 * Reurn: Returns 0 Always
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	{
		_putchar('\n');
	}
}
