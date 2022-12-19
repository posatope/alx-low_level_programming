#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
/**
 * _atoi - prints the alphabet 10 times
 * @*s: prints each on separate lines
 * Return: 0.
 */
int _atoi(char s)
{
	signed val;
	
	val = atoi(s);
	printf ("%d", val);
	return(0);
}
