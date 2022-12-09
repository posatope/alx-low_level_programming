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
	char D;

	for (D = 'a'; D <= 'z'; D++)
	{
		if (D != 'q' && D != 'e')
			putchar(D);
	}
	putchar('\n');
	return (0);
}
