#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - A function that concatenates all arguments of your program
 * @ac: number of arguments
 * @av: array containing arguments
 * Return: A pointer to string that containing all arguments
 * or NULL if ac == 0, if av == NULL, or upon failure
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i = 0, j = 0, k = 0, l = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			k++;
		k++;
	}
	k++;
	s = malloc(k * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[l] = av[i][j];
			l++;
		}
		s[l] = '\n';
		l++;
	}
	s[l] = '\0';
	return (s);
}
