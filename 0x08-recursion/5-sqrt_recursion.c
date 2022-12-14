#include "main.h"
#include <math.h>
#include <ctype.h>
#include <stdio.h>
/**
 * findsqr - to loop without loop
 * @n: number to squareroot
 * @d: root
 * Return: Always 0.
 */
int findsqr(int n, int d)
{
	if (n / d != d)
	{
		return (findsqr(n, d + 1));
	}
	else if (n / d == d && d < n)
	{
		if (n % d != 0)
		{
			_putchar('-');
			return (1);
		}
		else
		{
			return (d);
		}
	}
	else
	return (0);
}
/**
 * _sqrt_recursion - check the code
 * @n: number to squareroot
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (1);
	}
	else if (n == 1)
	{
		return (n);
	}
	else
	{
		return (findsqr(n, 1));
	}
}
