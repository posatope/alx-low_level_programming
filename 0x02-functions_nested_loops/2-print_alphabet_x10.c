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

	for (i = 'a'; i <= 'z'; i++)
		print_alphabet(i);
	print_alphabet(i);
	print_alphabet(i);
	print_alphabet(i);
	print_alphabet(i);
	print_alphabet(i);
	print_alphabet(i);
	print_alphabet(i);
	print_alphabet(i);
	print_alphabet(i);
	_putchar('\n')
}
