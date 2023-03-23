#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - check the code
 * @n: number of arguments
 * Return: 0.
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int sum = 0, i;

va_list args;
va_start(args, n);
if (n == 0)
return (0);

for (i = 0; i < n; i++)
{
sum += va_arg(args, unsigned int);
}
va_end(args);
return (sum);
}
