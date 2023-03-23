#include "main.h"
/**
 * _islower - function to print lower case
 * @c: parameter to be printed
* Return: Return 1 if true, 0 if false
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

