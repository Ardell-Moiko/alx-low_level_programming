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
int x;
for (x = 0; x <= 9; x++)
{
putchar('0' + x);
if (x < 9)
{
putchar(", ");
}
}
putchar('\n');
return (0);
}
