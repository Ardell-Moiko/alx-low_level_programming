#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
int x, y;
for (x = 0; x <= 8; x++)
{
for (y = x + 1; y <= 9; y++)
{
if (x != 8 && y != 9)
{
putchar('0' + x);
putchar('0' + y);
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
