#include "main.h"
#include <stdio.h>

/**
 * reverse_array - check the code
 * @a: Array
 * @n: length of array.
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i, temp = 0;

for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
}
}
