#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char D, C;

	for (D = 'a'; D <= 'z'; D++)
	{
		putchar(D);
	}
	
	for (C = 'A'; C <= 'Z'; C++)
	{
		putchar(C);
	}
	putchar('\n');
	return (0);
}
