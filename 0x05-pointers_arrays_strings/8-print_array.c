#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_array - check the code
 * @a: character
 * @n: second char
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (i = 0 i <= n; i++)
	{
		printf("%d, ", a[i]);
	}
	_putchar('\n');
}
