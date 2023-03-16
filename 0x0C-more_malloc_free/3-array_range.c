#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers.
 * @min: Minimum integer value
 * @max: Maximum integer value
 *
 * Return: Pointer to array address.
 */
int *array_range(int min, int max)
{
int *arr;
int i, j, range = 0;

if (min > max)
return (NULL);

range = (max - min) + 1;
arr = malloc(sizeof(int) * range);
if (arr == NULL)
return (NULL);
for (i = 0; i <= range; i++)
{
arr[i] = min;
for (j = 0; j <= range; j++)
{
min++;
}
}
return (arr);
}
