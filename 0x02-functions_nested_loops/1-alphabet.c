#include "main.h"
#include <unistd.h>
/**
 * main -  prints the alphabet, in lowercase
 * Description: followed by a new line.
 * Return: 0.
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}
