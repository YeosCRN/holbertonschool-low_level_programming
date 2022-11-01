#include "main.h"
/**
 * free_grid - function
 * @grid: 2D array
 * @height: var
 * Return: pointer, NULL for fail
 */
void free_grid(int **grid, int height)
{
	int x; 
	
	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
