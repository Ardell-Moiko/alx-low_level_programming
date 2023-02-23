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
int i = 0;
long a = 1, b = 2, total = b;

while (a + b < 4000000)
{
b += a;
if (b % 2 == 0)
total += b;
a = b - a;
++i;
}
printf("%ld\n", total);
return (0);
}
