#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn - prints buffer in hexa
 * @s: the address of memory to print
 * @accept: the size of the memory to print
 *
 * Return: s.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;

	n = strspn(s, accept);
	return (n);
}
