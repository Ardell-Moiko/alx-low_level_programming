#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: long integar var
 * Return: nothing.
 */

void print_binary(unsigned long int n)
{
unsigned long int lz = 1, b = 1;

for (b = b << (sizeof(unsigned long int) * 8 - 1); b; b = b >> 1)
{
if ((n & b) && lz)
lz = 0;

if (!lz)
_putchar(((n & b) ? 1 : 0) + '0');
}
if (lz)
_putchar('0');
}
