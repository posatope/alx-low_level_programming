#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - prints buffer in hexa
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned  int i = 0;

	s = malloc(size * sizeof(c));
	while (i < size)
	{
		if (s == NULL)
		{
			return (NULL);
		}
		s[i] = c;
		i++;
	}
	return (s);
}
