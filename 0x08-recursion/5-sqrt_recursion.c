#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		putchar('-');
		return (1);
	}
	if (remainder(sqrt(n), 1) != 0)
	{
		putchar('-');
		return (1);
	}
	return (sqrt(n));
}
