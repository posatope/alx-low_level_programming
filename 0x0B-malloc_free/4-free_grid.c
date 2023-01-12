
#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function that concatenates two strings
 * @grid: parmater for grid
 * @height: parameter for height
 * Return: Always 0.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	while (i < height)
		free((int *)grid[i++]);
	free(grid);
}
