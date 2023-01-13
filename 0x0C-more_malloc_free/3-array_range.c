#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * array_range - A function that allocates memory using malloc.
 * @min: An unsigned input integer
 * @max: An unsigned input integer
 * Return: Apointer to allocated memory or NULL if it fails
 */
int *array_range(int min, int max)
{
	int *s;
	int i = 0, a;

	if (min > max)
		return (NULL);
	for (a = min; a <= max; a++)
		i++;
	printf("%d\n", i);
	s = malloc(i + 1);
	if (s == NULL)
		return (NULL);
	i = 0;
	for (a = min; a <= max; a++)
	{
		s[i] = a;
		i++;
	}
	return (s);
}
