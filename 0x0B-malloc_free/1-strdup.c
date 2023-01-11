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
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	s = malloc(i * sizeof(char));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	s[i] = str[i];
	return (s);
}
