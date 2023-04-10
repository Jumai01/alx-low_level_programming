#include <stdio.h>

/**
 * main - entry point
 * @argc: n args
 * @argv: arr args
 * Return: always return 0
 */
int main(int argc, char *argv[] __attribute((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
