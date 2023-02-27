#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swaps vals of two integers.
 *@a: Integer a.
 *@b: integer b.
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int x;
x = *a;

*a = *b;

*b = x;
}
