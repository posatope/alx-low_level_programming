#include <stdio.h>
#include <stdlib.h>
/**
 * main - program prints its own name.
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	while(argc--)
		printf("%s\n", *argv++);
	Return (0);
}
