#include <stdio.h>
#include <stdlib.h>
/**
 * main - program prints its own name.
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0 on success
 */
int main(int argc, int *argv[])
{
	int d;
	
	argc--;
	if (argc < 2)
		printf("Error%s\n");
		return (1);
	else if (argc ==3)
		d = argv[1] * argv[2];
		printf("%d\n", d);
	return (0);
}
