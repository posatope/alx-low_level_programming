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

	for (a = 0; a <= c; a++)
		_putchar(s[c - a]);
	_putchar('\n');
}
