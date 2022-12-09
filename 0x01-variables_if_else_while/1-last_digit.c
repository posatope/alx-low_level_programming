#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
  int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
  /*strlen(n) gives total length of string . string index starts from 0 
	last index of character is strlen(c)-1*/ 
  int c;
  
	c = strlen(n)-1;
  
  if (n[c] > 5)
  {
	  printf ("Last digit of %d is %d and is greater than 5\n", n, n[c]);
  }
  else if (n[c] == 0)
  {
	  printf ("Last digit of %d is %d and is 0\n", n, n[c]);
  }
  else
  {
	  printf ("Last digit of %d is %d and is less than 6 and not 0\n", n, n[c]);
  }
	return (0);
}
