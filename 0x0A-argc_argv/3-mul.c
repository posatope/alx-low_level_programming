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
	int a,b,d;

	argc--;
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc ==3)
	{
		a = (int)argv[1];
		b = (int)argv[2];
		d = a * b;
		printf("%d\n", d);
	}
	return (0);
}
