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
int _atoi(char *s)
{
int val;
   char str[20];

   strcpy(str, s);
   val = atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   return(0);
}
