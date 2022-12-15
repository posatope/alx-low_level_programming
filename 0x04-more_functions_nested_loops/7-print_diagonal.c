#include "main.h"

/**
 * print_diagonal - check the code
 * @n: number 
 * Return: Always 0.
 */
 void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
	    putchar('\n');
	}
	else 
	for(a = 1; a <= n; a++) 
	{
		for (b=1; b < a; b++)
		{
			_putchar(' ');
		}
	_putchar('\\');
	_putchar('\n');
	}
}
