#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * findij - prints buffer in hexa
 * @s1: the address of memory to print
 * @i: the address of memory to print
 * Return: Nothing.
 */
unsigned int findij(char *s1, unsigned int i)
{
	if (s1 == NULL)
		s1 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	i++;
	return (i);
}
/**
 * string_nconcat - prints buffer in hexa
 * @s1: the address of memory to print
 * @s2: the address of memory to print
 * @n: the address of memory to print
 * Return: Nothing.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, k = 0;

	i = findij(s1, i);
	j = findij(s2, j);
	if (j == 0 || n >= j)
	{
		n = j;
	}
	s = malloc((i + n + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	i = 0;
	for (; s1[i] != '\0'; i++)
	{
		s[i] = s1[i];
	}
	k = 0;
	while (s2[j] != '\0' && k < n)
	{
		s[i + k] = s2[k];
		k++;
	}
	s[i + k] = '\0';
	return (s);
}
