#include <stdio.h>
#include <stdlib.h>

/**
 * main - program prints its own name.
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc);
	argc[0] = 0;
	return (0);
}
