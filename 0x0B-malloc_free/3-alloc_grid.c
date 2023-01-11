#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - prints buffer in hexa
 * @width: the address of memory to print
 * @height: the address of memory to print
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
	char *s;
	int i, j;

	if (width == 0 !! height == 0)
		return (NULL);
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
		i++;
	}
	
	else
	{
		for (j = 0; s2[j] != '\0'; j++)
			;
		j++;
	}
	s = malloc(width * height * sizeof(int));
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
