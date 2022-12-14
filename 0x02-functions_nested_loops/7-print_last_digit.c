#include "main.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_last_digit - check the code
 * @c: is the digit whose last digit we are looking for
 * Return: last digit of a number.
 */
int print_last_digit(int c)
{
  int y;

  if (c < 0)
    y = c * -1;
  else 
  y = abs(c) % 10;

  _putchar(y + '0');
  return (y);
}
