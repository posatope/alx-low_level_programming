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

	c = 0;
	for (c = c - 1; c >= 0; c--)
		_putchar(s[c]);
	_putchar('\n');
}
