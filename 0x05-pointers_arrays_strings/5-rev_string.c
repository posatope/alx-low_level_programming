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
	int c = strlen(s);
	int a;

	if (c <= 1)
		_putchar(s[c]);
	else
		for (a = 0; a <= c; a++)
			s = _putchar(s[c - a]);
	_putchar('\n');
	return (s);
}
