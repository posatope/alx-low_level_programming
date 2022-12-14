#include "main.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * times_table - check the code
 * @c: is the digit whose last digit we are looking for
 * Return: last digit of a number
 */
void times_table(void);
{
	int y;
  int z;
  
  for (y=0; y<9; y++)
  {
    
	if (c == INT_MIN)
	{
	y = 8;
	}
	else
	{
	y = abs(c);
	}

	_putchar(y % 10 + '0');
	return (y % 10);
}
