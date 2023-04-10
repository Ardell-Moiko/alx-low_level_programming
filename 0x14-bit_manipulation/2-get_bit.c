#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: integar var.
 * @index: the index, starting from 0 of the bit you want to get.
 * Return: Always 0.
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int b = 1;

if (index > (sizeof(unsigned long int) * 8 - 1))
{
return (-1);
}

if (b << index & n)
{
return (1);
}
else
return (0);
}
