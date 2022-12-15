#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_number - prints a number
 * @n: Input number
 * Return: nothing
 */

void print_number(int n)
{
	if (n == 0)
		_putchar('0');
	else if (n < 0)
	{
		_putchar('-');
		print_number(n * -1);
	}
	else
		print_number(n);
}
