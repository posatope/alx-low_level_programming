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
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n); 
	return (dest);
}
