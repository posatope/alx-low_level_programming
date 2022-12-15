#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * print_line - check the code
 * @n: the number processed
 * Return: Always 0.
 */
void print_line(int n)
{
	int a;
	
	for(a = 1; a <= n; a++)
	{
		if (a <= 0)
		{
		    _putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
