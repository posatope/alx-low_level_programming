#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr - prints buffer in hexa
 * @s: the address of memory to print
 * @c: the size of the memory to print
 *
 * Return: s.
 */
char *_strchr(char *s, char c)
{
	char *f;

    f = strchr(s, c);
	return (f);
}
