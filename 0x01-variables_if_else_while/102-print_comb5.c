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
for (x = 0; x <= 99; x++)
{
for (y = 0; y <= 100; y++)
{
if (x != y)
{
putchar('0' + (x / 10));
putchar('0' + (x % 10));
putchar(' ');
putchar('0' + (y / 10));
putchar('0' + (y % 10));
if (x == 98 && y == 99)
break;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
