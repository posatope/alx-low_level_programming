#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_number- check the code
 * @n: integer to print
 * Return: Always 0.
 */
void print_number(int n)
{
	if (n >= 0 && n <= 9)
	{
		_putchar(n  + '0');
	}
	else if (n > 9)
	{
		print_number(n / 10);
		_putchar((n % 10) + '0');
	}
	else if (n < 0 && n >= -9)
	{
		_putchar('-');
		n = -n;
		_putchar(n  + '0');
	}
	else if (n < -9)
	{
		_putchar('-');
		n = -n;
		print_number(n/10);
		_putchar((n % 10) + '0');
	}
}
