#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - check the code
 * @str: character
 * Return: Always 0.
 */
void puts2(char *str)
{
	int c;
	char a;

	for (c = 0; str[c] != 0; c++)
	{
		while (c % 2 == 0)
			a = str [c]
			_putchar(a);
	}
	_putchar('\n');
}
