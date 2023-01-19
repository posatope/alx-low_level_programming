#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name as is
 * @f: prints a name as is
 * @name: name of the person
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL}
	    exit (0);
	else 
		f(name);
}
