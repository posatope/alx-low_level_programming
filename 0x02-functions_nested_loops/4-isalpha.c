#include <ctype.h>
#include "main.h"
#include <stdio.h>
/**
 * _isalpha - check if int c is a alphabet.
 * @c: is the value being checked
 * Return: 1 if it is a lowercase letter, 0 if it is not a lowercase letter.
 */
int _isalpha(int c)
{
	if (isalpha(c) < 0 || isalpha(c) > 0)
		return (1);
	else
		return (0);
}
