#include <main.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - A function that allocates memory using malloc.
 * @b: An unsigned input integer
 * Return: Apointer to allocated memory or NULL if it fails
 */
void *malloc_checked(unsigned int b)
{
    void *s;

    s = (void *)malloc(sizeof(b));
    if (s == NULL)
        printf("%d\n", 98);
    return (s);
}
