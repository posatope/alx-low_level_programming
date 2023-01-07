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
	int i, a, b, d sum;

	sum = 0;
	if (argc !> 2)
	{
		printf("%d\n", 0);
	}
	if (argc == 2)
	{
		printf("%d\n", atoi(argv[1]));
	}
	else
	{
		for (i = 2; i < argc; i++)
		{
			if ((isdigit(argv[i])) == 0)
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
