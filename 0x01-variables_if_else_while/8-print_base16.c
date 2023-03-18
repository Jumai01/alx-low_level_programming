#include <stdio.h>
/**
 * main - Entry Level
 * Description - prints all numbers of base 16 in lowwer case
 * Return: Returns 0 Always
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	{
		putchar('\n');
	}
	return (0);
}

