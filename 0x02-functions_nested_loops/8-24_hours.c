#include "main.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

/**
 * jack_bauer - check the code
 * y is the digit whose last digit we are looking for
 * Return: last digit of a number
 */
void jack_bauer(void)
{
  int y;
    
  for (y = 0; y < 60; y++)
  {
    _putchar((y/10) + '0');
    _putchar((y%10) + '0');
  }
}
