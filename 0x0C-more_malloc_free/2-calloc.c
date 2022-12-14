#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
/**
 * _calloc - A function that allocates memory for an array using malloc
 * @nmemb: number of memory spaces
 * @size: size of nmemb
 * Return: returns pointer to allocated space, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	for (; i < (nmemb * size); i++)
	{
		s[i] = 0;
	}
	return (s);
}
