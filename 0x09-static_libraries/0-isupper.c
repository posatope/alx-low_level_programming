#include <ctype.h>
#include "main.h"
#include <stdio.h>
/**
 * _isupper - check if int c is a lower case.
 * @c: is the value being checked
 * Return: 1 if it is a lowercase letter, 0 if it is not a lowercase letter.
 */
int _isupper(int c)
{
	if (isupper(c) < 0 || isupper(c) > 0)
		return (1);
	else
		return (0);
}
