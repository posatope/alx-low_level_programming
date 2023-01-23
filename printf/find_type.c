#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * find_type - ID the type specifier passed by printf with a valid_type
 * @s: Type to check given as char
 * Return: pointer function of char type, valid_type matched
 */
char *(*find_type(char s))(va_list)
{
	int i;
	printop input_type[] = {
		{"c", t_char},
		{"s", t_string},
		{"%", t_percent},
		{"d", t_int},
		{"i", t_int},
		{"u", t_unsigned},
		{"o", t_octal},
		{"r", t_reverse},
		{"R", t_rot13},
		{NULL, NULL}
	};

	for (i = 0; input_type[i].op; i++)
	{
		if (s == *input_type[i].op)
		{
			return (input_type[i].f);
		}
	}
	return (NULL);
}
