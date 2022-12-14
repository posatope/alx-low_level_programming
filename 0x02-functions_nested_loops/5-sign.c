#include <ctype.h>
#include "main.h"
#include <stdio.h>
/**
 * print_sign - check if int c is a alphabet.
 * @n: is the value being checked
 * Returns 1 and prints + if n is greater than zero, Returns 0 and prints 0 if n is zero, Returns -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0 || n > 1)
	{
		_putchar ('+');
		return (1);
	}
	else if (n < 0 || n < -1)
	{
		_putchar ('-');
		return (-1);
	}
	else
	{
		_putchar (0);
	}
	return (0);
}
