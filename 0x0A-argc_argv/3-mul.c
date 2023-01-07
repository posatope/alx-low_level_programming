#include <stdio.h>
#include <stdlib.h>
/**
 * main - program prints its own name
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int a, b, d;

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		d = a * b;
		printf("%d\n", d);
	}
	return (0);
}
