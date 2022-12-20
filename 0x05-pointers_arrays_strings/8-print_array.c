#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcpy - check the code
 * @dest: character
 * @src: second char
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
