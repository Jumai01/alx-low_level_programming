#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry Level
 * Description - Generates last digit value of a random nunber
 * Return: Returns 0 Always
 */
int main(void)
{
	int n;
	int y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	y = n % 10;

	if (y > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, y);
	}
	else if (y == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, y);
	}
	else if (y < 6 && y != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
				n, y);
	}
	return (0);
}
