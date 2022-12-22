#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h> 
#include <stdbool.h>

/**
 * string_toupper - check the code
 * @str: char 1
 * Return: Always 0.
 */
char *string_toupper(char *str)
{
	for (long unsigned int i = 0; i <= strlen(str); i++) 
		putchar(toupper(str[i]));
	return 0;
}
