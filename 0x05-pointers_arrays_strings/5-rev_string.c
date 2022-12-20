#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - check the code
 * @s: character
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int c;
	int a;

	for (c = 0; s[c] != 0; c++)
	{
	}
	for (a = 0; a <= c; a++)
		_putchar(s[c - a]);
	_putchar('\n');
}
