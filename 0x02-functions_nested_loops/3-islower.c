#include <ctype.h>
#include "main.h"
#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int _islower(int c)
{
  if (islower(c) > 0)
    return 1;
  else
    return 0;
}
