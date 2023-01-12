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
	int **s, i = 0, j = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	s = malloc(width * height * sizeof(int));
	if (s == NULL)
		return (NULL);
	for (; i < height; i++)
		for (; j < width; j++)
			s[i][j] = 0;
	return (s);
}
