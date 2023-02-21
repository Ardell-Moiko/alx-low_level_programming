#include "main.h"

/**
 * times_table - Prints 9 times table
 *
 * Return: Always 0.
 */
void times_table(void)
{
int x, y, z, i, j;
for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{
z = x * y;
if (z > 9)
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
