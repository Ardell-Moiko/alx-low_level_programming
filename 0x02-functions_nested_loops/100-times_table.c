#include "main.h"

/**
 * print_times_table - Prints n times table.
 * @n: The integer used for the times table.
 * Return: Always 0.
 */
void print_times_table(int n)
{
int x, y, z, i, j;
if (n > 15 || n == 0)
{
}
else
{
for (x = 0; x <= n; x++)
{
for (y = 0; y <= n; y++)
{
z = x * y;
if (z > n)
{
i = z % 10;
j = (z - i) / 10;
_putchar(',');
_putchar(' ');
_putchar('0' + j);
_putchar('0' + i);
}
else
{
if (y != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar('0' + z);
}
}
_putchar('\n');
}
}
}
