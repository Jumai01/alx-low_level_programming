#include <stdio.h>
/**
 * main - Entry level
 * Description - prints all possible combinations of single-digit numbers
 * Return: Returns 0 Always
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	if (i != 9)
	{
		putchar(',');
		putchar(' ');
	}
	{
		putchar('\n');
	}
	return (0);
}
