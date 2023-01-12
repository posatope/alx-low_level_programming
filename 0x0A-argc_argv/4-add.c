#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program prints its own name
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i, a, sum = 0;

	if (argc < 1)
	{
		printf("%d\n", 0);
	}
	for (i = 0; argv[argc][i]; i++)
	{
		if ((isdigit(argv[argc][i])) == 0)
		{
			printf("Error\n");
			return (1);
		}
	}
	for (i = 1; i < argc; i++)
	{
		a = atoi(argv[i]);
		printf("%d\n", a);
	}
	return (0);
}
