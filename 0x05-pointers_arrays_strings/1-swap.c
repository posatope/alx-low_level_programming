#include "main.h"
#include <stdio.h>

/**
 * swap_int - check the code
 * @a: first number
 * @b: second number 
 * Return: No return.
 */
void swap_int(int *a, int *b)
{
	int c;
	int d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
