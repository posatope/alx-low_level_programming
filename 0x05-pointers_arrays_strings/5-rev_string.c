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
	int n = strlen(s);
	int i;

	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			while ((n - i) != 0)
				_putchar(s[n - i]);
		}
		_putchar('\n');
	}
}
