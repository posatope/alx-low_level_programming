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
	while (i < n)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
		i++;
	}
	_putchar('\n');
}
