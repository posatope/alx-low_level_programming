#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - function that prints half of a string, followed by a new line
 * @str: declaration of n and paramters for the function
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i, j, k;

	i = 0;
	while (str[i] != '\0')
		i++;

	if (i % 2 == 0)
		j = i / 2;
	else
		j = (i + 1) / 2;
	while (j < i)
	{
		putchar(str[j]);
		j++;
	}
	putchar('\n');
}
