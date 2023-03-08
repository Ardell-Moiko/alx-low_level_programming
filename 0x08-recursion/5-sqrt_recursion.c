#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - main recursive funxtion
 * _sqrt - returns the natural square root of a number
 * @n: Integer var
 * @i: iteration integer
 * Return: natural sqrt
 */
int _sqrt(int n, int i);

int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}

int _sqrt(int n, int i)
{
int sq = i * i;

if (sq > n)
return (-1);
if (sq == n)
return (i);
return (_sqrt(n, i + 1));
}
