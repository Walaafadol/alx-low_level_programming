#include <stdlib.h>
#include "main.h"
/**
*free_grid - program
*Return:0
*@grid:parameter
*@height:argument
*/
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
