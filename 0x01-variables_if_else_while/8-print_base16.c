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
for (x = 0; x < 10; x++)
{
putchar('0' +  x);
}
for (x = 'a'; x <= 'f'; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
