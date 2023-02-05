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
int _pow(int a, int d)
{
	int i = 0, pow = 1;

	if (d == 0)
		return (1);
	for (; i < d; i++)
		pow = pow * a;
	return (pow);
}
}
/**
 * print_binary - convert to binary
 * @n: number to be converted
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{
    int i = 0;
    int f, j = 0;
    unsigned long int rem;

    if (n == 0 || n == 1)
        printf("%ld", n);
    
    else 
    {
        for (; i < n; i++)
            if (_pow(2, i) > n)
            {
                break;
            }
        f = i - 1;
        printf("%d", 1);
        rem = n - (_pow(2, f));
        if (rem == 0)
        {
            for (; j < f - 1; j++)
                _putchar('0');
        }
        if (rem == 1)
        {
            for (; j < f - 2; j++)
                _putchar('0');
            _putchar('0');
            _putchar(1 + '\0');
        }
        if (rem == 2)
        {
            for (; j < f - 3; j++)
                _putchar('0');
            _putchar(1 + '\0');
            _putchar('0');
        }
        if (rem == 3)
        {
            for (; j < f - 3; j++)
                _putchar('0');
            _putchar(1 + '\0');
            _putchar(1 + '\0');
        }
        else
        {
            
            for (i = 0; i < f; i++)
                if (_pow(2, (f - i)) < rem)
                    _putchar('0');
                else if (_pow(2, (f - i)) >= rem)
                {
                    print_binary(rem);
                    break;
                }
        }
    }
}
