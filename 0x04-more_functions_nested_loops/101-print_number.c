#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_number - prints a number
 * @n: Input number
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n == 0)
		_putchar('0');
	if (n > 0)
		print_number(n/10);
	
	_putchar(n%10 + '0');
	_putchar('\n');
}
