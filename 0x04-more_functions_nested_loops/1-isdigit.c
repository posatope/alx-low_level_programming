#include <ctype.h>
#include "main.h"
#include <stdio.h>
/**
 * _isdigit - check if int c is a lower case.
 * @c: is the value being checked
 * Return: 1 if it is a lowercase letter, 0 if it is not a lowercase letter.
 */
int _isdigit(int c)
{
	if (isdigit(c) < 0 || isdigit(c) > 0)
		return (1);
	else
		return (0);
}
