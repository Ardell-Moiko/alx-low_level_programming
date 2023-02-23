#include "main.h"

/**
 * print_times_table - Prints n times table.
 * @n: The integer used for the times table.
 * Return: Always 0.
 */
void print_times_table(int n)
{
int x, y, z;
if (n >= 0 && n <= 15)
{
for (x = 0; x <= n; x++)
{
_putchar('0');
for (y = 1; y <= n; y++)
{
_putchar(',');
_putchar(' ');
z = x * y;
if (z <= 99)
_putchar(' ');
if (z <= 9)
_putchar(' ');
if (z >= 100)
{
_putchar('0' + (z / 100));
_putchar('0' + ((z / 10) % 10));
}
else if (z <= 99 && z >= 10)
{
_putchar('0' + (z / 10));
}
_putchar('0' + (z % 10));
}
_putchar('\n');
}
}
}