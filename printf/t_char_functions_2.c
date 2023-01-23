#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <stddef.h>
#include <string.h>
#include "main.h"
/**
 * t_reverse - reverses a string
 * @ap: string to reverse
 * Return: pointer to string
 */
char t_reverse(va_list ap)
{
	int c;
	char s

	for (c = 0; ap[c] != 0; c++)
	{
	}
	for (c = c - 1; c >= 0; c--)
		s = (ap[c]);
	return (s);
}
