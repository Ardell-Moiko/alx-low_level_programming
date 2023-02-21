#include "main.h"

/**
 * jack_bauer - check the code
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
int x, y, i, j;
for (x = 0; x <= 2; x++)
{
for (y = 0; y <= 9; y++)
{
if ((x <= 1 && y <= 9) || (x <= 2 && y <= 3))
{
for (i = 0; i <= 5; i++)
{
for (j = 0; j <= 9; j++)
{
_putchar('0' + x);
_putchar('0' + y);
_putchar(':');
_putchar('0' + i);
_putchar('0' + j);
_putchar('\n');
}
}
}
}
}
}
