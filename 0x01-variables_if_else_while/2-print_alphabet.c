#include <stdio.h>
/**
 * main - Entry Level
 * Description - Prints the alphabet in lowwer case
 * Return: Returns 0 Always
 */
int main(void)
{
	int i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		putchar(i);
	}

	{
		putchar('\n');
	}
	return (0);
}
