#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h> 

/**
 * string_toupper - check the code
 * @str: char 1
 * Return: Always 0.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while(str[i])
	{
		putchar(toupper(str[i]));
		i++;
	}
}
