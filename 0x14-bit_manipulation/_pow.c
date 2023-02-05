#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "main.h"
#include <string.h>
/**
 * _pow - function that powers
 * @a: base
 * @d: number of times
 * Return: the converted number, or 0
 */
unsigned long int _pow(int a, int d)
{
	unsigned long int i = 0, pow = 1;

	if (d == 0)
		return (1);
	for (; i < d; i++)
		pow = pow * a;
	return (pow);
}
