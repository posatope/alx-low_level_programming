#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_diagsums - prints buffer in hexa
 * @a: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: s.
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
		    while (i == j)
		    {
		        sum1 += a[i][j];
		        i++;
			}
		}
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
		    while ((i + j) == (size - 1))
			{
		        sum2 += a[i][j];
		        i++;
			}
		}		
	}
	printf("%d, %d\n", sum1, sum2);
}
