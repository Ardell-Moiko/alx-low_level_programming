#include "main.h"

/**
 * print_line - print straight line
 * @n: number of underscore symbols
 * Return: Always 0.
 */
void print_line(int n)
{
int z;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (z = 1; z <= n; z++)
{
_putchar('_');
}
_putchar('\n');
}
}
