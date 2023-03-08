#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Return value of x raised to the power y
 * @x: Integer x
 * @y: Integer y
 * Return: pow.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if ( y == 0)
return (1);
else
return (x * _pow_recursion(x, (y - 1)));
}
