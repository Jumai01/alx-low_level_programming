#include<stdio.h>
/**
 * main - Entry level
 * Description - Prints alphabet in continued loop
 * Return: Returns 0 Always
 */
int main(void)
{
	int i;

	for (i = 'a';  i <= 'z'; i++)
	{
		if (i == 'q' || i == 'e')
		{
			continue;
		}
		putchar(i);
	}

	{
		putchar('\n');
	}
	return (0);
}
