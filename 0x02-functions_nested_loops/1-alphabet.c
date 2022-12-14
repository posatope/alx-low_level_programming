#include "main.h"
#include <unistd.h>
#include "1-main.c"

/**
 * main -  prints the alphabet, in lowercase
 * Description: followed by a new line.
 * Return: 0.
 */

int main()
{
	char i;

	for (i = 'a'; i <= 'z' ; i++)
		print_alphabet(i);
	_putchar('\n');

	return (0);
}
