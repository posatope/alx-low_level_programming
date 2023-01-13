#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * findij - prints buffer in hexa
 * @s1: the address of memory to print
 * @i: the address of memory to print
 * Return: Nothing.
 */
int findij(char *s1, int i)
{
	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
		i++;
	}
	return (i);
}
/**
 * str_concat - prints buffer in hexa
 * @s1: the address of memory to print
 * @s2: the address of memory to print
 * Return: Nothing.
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0;
	int j = 0;

	i = findij(s1, i);
	j = findij(s2, j);
	s = malloc((i + j - 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	i = 0;
	if (s1 == NULL)
		i = 0;
	else
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	j = 0;
	if (s2 == NULL)
		;
	else
	while (s2[j] != '\0')
	{
		s[i + j] = s2[j];
		j++;
	}
	return (s);
}
