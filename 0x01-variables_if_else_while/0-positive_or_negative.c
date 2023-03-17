#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry Level
 * Description - Generates random n0s to check if it's-ve/+ve/0
 *
 * Return: Returns 0 Always
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
