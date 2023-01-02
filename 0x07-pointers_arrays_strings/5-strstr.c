#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strstr - prints buffer in hexa
 * @haystack: the address of memory to print
 * @needle: the size of the memory to print
 *
 * Return: s.
 */
char *_strstr(char *haystack, char *needle)
{
	char *t;

	t = strstr(haystack, needle);
	return (t);
}
