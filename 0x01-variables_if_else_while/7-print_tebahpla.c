#include <stdio.h>
/**
 * main - Entry Level
 * Description - Prints the aplhabet in reverse
 * Return: Return 0 Always
 */
int main(void)
{
	int i;

	for (i = 'z' ; i >= 'a' ; i--)
	{
		putchar(i);
	}
	{
		putchar('\n');
	}
	return (0);
}

