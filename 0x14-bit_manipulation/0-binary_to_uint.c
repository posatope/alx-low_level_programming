#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int y = y - 1;
	unsigned int m = 0;
	for (i = 0; i < strlen(b); i++)
	{
	    if (b[i] != '0' && b[i] != '1')
			return (0);
		m += ((b[i] - '0') * pow (2, (strlen(b) - i - 1)));
	}
	return (m);
}
