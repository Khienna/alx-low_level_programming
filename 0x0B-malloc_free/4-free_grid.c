#include "main.h"
#include <stdlib.h>

/**
 * free_grid -  frees grid
 * @height: height
 * @grid: grid
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);

	free(grid);
}
