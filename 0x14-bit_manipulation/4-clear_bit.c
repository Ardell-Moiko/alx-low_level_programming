#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to long integar var
 * @index: the index, starting from 0 of the bit you want to set
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int b = sizeof(unsigned long int) * 8, set_bit = 1;

if (index > (b - 1))
return (-1);

set_bit = ~(set_bit << index);
*n = *n & set_bit;
return (1);
}
