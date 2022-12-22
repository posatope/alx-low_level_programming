#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - check the code
 * @dest: char 1
 * @src: char 2
 * @n: int size
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int x;
	
	x = strcmp(s1, s2); 
	printf("%d", x);
	return (x);
}
