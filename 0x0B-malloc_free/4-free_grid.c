#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2d array
 * @grid: 2d grid
 * @height: height of grid
 * Return:void
 *
 */
void free_grid(int **grid, int height)
{
int fg;
for (fg = 0; fg < height; fg++)
{
free(grid[fg]);
}
free(grid);
}
