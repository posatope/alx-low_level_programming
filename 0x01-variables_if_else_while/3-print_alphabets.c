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

	for (D = 'a'; C = 'A'; D <= 'z'; C <= 'Z'; D++; C++)
	{
		putchar(D);
		putchar(C);

	}
	putchar('\n');
	return (0);
}
