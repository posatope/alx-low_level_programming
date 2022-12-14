#include "main.h"
#include <unistd.h>
/**
 * print_alphabet_x10 -  prints the alphabet, in lowercase
 * Description: followed by a new line.
 * Return: 0.
 */

void print_alphabet_x10(void)
{
	char i;
	int a;
	
	for (a = 0; a < 10; a++)
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i\n);
	_putchar('\n');
}
