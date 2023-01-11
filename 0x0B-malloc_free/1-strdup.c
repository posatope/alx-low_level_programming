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

	s = malloc(sizeof(str));
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		if (s == NULL)
		{
			return (NULL);
		}
		s = str;
		free (s);
	}
	return (s);
}
