#include "main.h"
#include <stdio.h>
/**
 * get_bit - check the code
 * @n: number from user
 * &index: bit position you want to check
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return(((n >> index) & 1));
}
