#include <ctype.h>
#include <stdio.h>

/**
 * _strlen_recursion - check the code
 * @s: number to squareroot
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
