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
	int (*f)(int, int);
	int a , b;
	if (argc == 4)
	{
		f = get_op_func(argv[2]);
		if (f == NULL)
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
	printf("%d\n", f(a, b));
	return (0);
}
