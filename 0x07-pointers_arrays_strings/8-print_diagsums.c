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
	int i, j, sum = 0;
	int mat[size][size] = a;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if(i == j)
			{
				sum = sum + mat[i][j];
			}
		}		
	}
	printf("%d\n", sum);
}
