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
	unsigned long int a = 0;

	while (a <= strlen(str))
	{
		*str = toupper(str[a]);
		putchar(toupper(str[a]));
		a++;
	}
	return str;
}
