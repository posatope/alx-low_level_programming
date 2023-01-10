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

	while (1)
	{
		s = malloc(size * sizeof(char));
		if (s == NULL)
			return (NULL);
	}
	return (s);
}
