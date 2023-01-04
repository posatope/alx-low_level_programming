#include "main.h"
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
    int d;

    if (n < 0)
    {
        putchar('-');
		return (1);
    }
    else
    d = 1;
    while (d < n)
    {
        if (n / d == d)
        {
            if (n % d != 0)
            {
                putchar('-');
                return (1);
            }
            else
            return (d);
        }
        d++;
    }
    return (d);
}
