#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - check the code
 * @s: character
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int n = strlen(*s);

  for (int i = 0; i < n / 2; i++)
  {
    char ch = s[i];
    s[i] = s[n - i - 1];
    s[n - i - 1] = ch;
  }
}
