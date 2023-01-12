#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * findij - prints buffer in hexa
 * @s1: the address of memory to print
 * @i: the address of memory to print
 * Return: Nothing.
 */
int findij(int ac, char **av)
{
	int i, j, k = 0;

	if (ac <= 0 || av == NULL)
		i = 0;
	else
	{
		for (i = 0; i < ac; i++) 
		{
			for (j = 0; av[i][j]; j++)
				k++;
			k++;
		}
	}
	return (k);
}
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
	int i = 0, j = 0, k = 0;

	i = findij(ac, av);
	s = malloc(i * sizeof(char));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		for (j = 0; av[i][j]; j++)
			s[k] = av[i][j];
			k++;
		k++;
	}
	return (s);
}
