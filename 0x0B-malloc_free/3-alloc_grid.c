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
	int **s;
	int i, j;

	if (width == 0)
	{
	    return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
			;
		i++;
	}
	if (height == 0)
	{
		return (NULL);
	}
	else
	{
		for (j = 0; j < width; j++)
			;
		j++;
	}
	s = malloc(width * height * sizeof(int));
	if (s == NULL)
		return (NULL);
	i = 0;
	for (i = 0; i < height; i++)
	{
		j = 0;
		for (j = 0; j < width; j++)
		{
			s[i][j] = 0;
		}
	}
	return (s);
}
