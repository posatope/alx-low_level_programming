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
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	s = malloc(i * sizeof(char));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}
