#include <ctype.h>
#include <stdio.h>

/**
 * _print_rev_recursion - check the code
 * @s: number to squareroot
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}
}
