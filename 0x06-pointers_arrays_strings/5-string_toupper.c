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
char *string_toupper(char *temp)
{
	int i = 0;
	char c;
	char str[];
	
	while(str[i])
	{
		_putchar (toupper(str[i]));
		i++;
	}
	return(0);
}
