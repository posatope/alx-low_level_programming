#include <unistd.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
  char c[8] = "_putchar";
  
  int i;
  
  for (i=0; i<9; i++)
    _putchar(c[i]);
  
  return 0;
}
