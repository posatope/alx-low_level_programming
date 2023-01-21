#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - program to perform simple operations
 * @argc: argument count
 * @argv: array of arguments
 * Return: exits 0 normally, 98 on argc error, 99 on illegal operator
 */
int main(int argc, char *argv[])
{
	int (*func)(int, int ), a , b;
	if (argc == 4)
	{
		func = get_op_func(argv[2]);
		if (func == NULL)
		{
			printf("Error\n");
			exit(99);
		}
	}
	else
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", func(a, b));
	return (0);
}
