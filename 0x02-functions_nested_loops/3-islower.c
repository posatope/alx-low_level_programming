#include <ctype.h>
#include "main.h"
#include <stdio.h>
/**
 * _islower - check if int c is a lower case.
 * c - is the value being checked
 * Return: Always 0.
 */
int _islower(int c)
{
	if (islower(c) < 0 || islower(c) > 0)
		return (1);
	else
		return (0);
}
