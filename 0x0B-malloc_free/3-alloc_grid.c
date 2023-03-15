#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Returns a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: 2D array.
 */
int **alloc_grid(int width, int height)
{
int **arr;
int i, j, x, y;

if (width <= 0 || height <= 0)
return (NULL);

arr = (int **)malloc(sizeof(int) * height);

if (arr == NULL)
{
free(arr);
return (NULL);
}

for (i = 0; i < height; i++)
{
arr[i] = malloc(sizeof(int) * width);

if (arr[i] == NULL)
{
for (j = i; j >= 0; j--)
{
free(arr[j]);
}
free(arr);
return (NULL);
}
}
for (x = 0; x < height; x++)
{
for (y = 0; y < width; y++)
{
arr[x][y] = 0;
}
}
return (arr);
}
