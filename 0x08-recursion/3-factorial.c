#include "main.h"
#include <stdio.h>

/**
 * factorial - Calculate factorial of a num using recursion
 * @n: integer parameter
 * Return: factorial
 */
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
else
return (n * factorial(n - 1));
}
