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
	int mat[100][100];

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if(i == j)
			{
				mat [i][j] = *a;
				sum = sum + mat[i][j];
			}
		}		
	}
	printf("%d\n", sum);
}
