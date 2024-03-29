#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "main.h"
#include <string.h>
#include <limits.h>
/**
 * get_bit - check the code
 * @n: number from user
 * &index: bit position you want to check
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int num = log2(n) +1;

	if ((index >= num))
		return(-1);
	return(((n >> index) & 1));
}
