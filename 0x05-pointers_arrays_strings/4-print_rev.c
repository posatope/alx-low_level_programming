#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - check the code
 * @s: character
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int n = strlen(s);
	int i;

	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = n; i <= 1; i--)
		{
			_putchar(s[i--]);
		}
		_putchar('\n');
	}
}
