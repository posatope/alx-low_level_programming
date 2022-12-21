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
	print_number(n / 10);
	putchar((n % 10) + '0');
}
