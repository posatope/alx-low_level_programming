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

	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		{
			_putchar(s[n--]);
		}
		_putchar('\n');
	}
}
