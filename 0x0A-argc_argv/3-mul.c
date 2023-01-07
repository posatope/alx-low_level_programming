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
	char c = "Error";
	int d;
	
	arg--;
	if (argc < 2)
		printf("%s\n", c);
		return (1);
	else if (argc ==3)
		d = argv[1] * argv[2];
		printf("%d\n", d);
	return (0);
}
