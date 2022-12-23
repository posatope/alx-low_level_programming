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
	int a = 0;
	unsigned long int i = strlen(str);
	char s_up[i];		
	
	while (str[i])
	{
		s_up[a] = toupper(str[a]);
		i++;
	}
	return s_up;
}
