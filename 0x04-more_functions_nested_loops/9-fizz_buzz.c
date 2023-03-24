#include <stdio.h>

/**
 * main - Entry Point
 * Return: Always return 0 (success)
 */
int main(void)
{
	int num;

	while (num++ < 100)

		if ((num % 3 == 0) && (num % 5 == 0))
			printf("FizzBuz");

		else if ((num % 3) == 0)
			printf("Fizz");

		else if  ((num % 5) == 0)
			printf("Buzz");

		else
			printf("%d", num);

	printf("\n");
	return (0);
}
