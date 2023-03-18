#include <stdio.h>
/**
 * main - Entry Level
 * Description - Prints number from 0 to 10
 * Return: Returns 0 Always
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	{
		putchar('\n');
	}
	return (0);
}
