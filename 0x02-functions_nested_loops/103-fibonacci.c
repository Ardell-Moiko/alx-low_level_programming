#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int a, b, c, total;
a = 1;
b = 1;
total = 0;

while (c <= 4000000)
{
c = a +b;
if ((c % 2) == 0)
{
total += c;
a = b;
b = c;
}
}
printf("%d\n", total);
return (0);
}
