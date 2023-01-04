#include "main.h"
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdio.h>
/**
 * findsqr - to loop without loop
 * @n: number to squareroot
 * @d: root
 * Return: Always 0.
 */
int findsqr(int n, int d)
{
    int k, g;

    k = n / d;
    g = n % d;
    
    if (n / d == d)
    {
        if (n % d != 0)
        {
            putchar('-');
            putchar(1 + '0');
        }
        else
        putchar(d + '0');
    }
    else
        return findsqr(n, d + 1);
}
/**
 * _sqrt_recursion - check the code
 * @n: number to squareroot
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
    int y;
    
    n = 16;
    if (n < 0)
    {
        putchar('-');
		putchar(1 + '0');
    }
    else
    findsqr(n, 1);
    return (0);
}
