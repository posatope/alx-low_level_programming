#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = '0'; n < '10'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}