#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - prints buffer in hexa
 * @str: the address of memory to print
 *
 * Return: Nothing.
 */
char *_strdup(char *str)
{
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	s = malloc(sizeof(str));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	s = str;
	return (s);
}
