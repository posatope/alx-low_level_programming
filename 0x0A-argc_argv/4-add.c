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
	int i, a, sum;

	sum = 0;
	if (argc < 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if ((isdigit(argv[argc][i])) == 0)
			{
				printf("Error\n");
				return (1);
			}
			a = atoi(argv[i]);
			sum += a;
			printf("%d\n", sum);
		}
	}
	return (0);
}
