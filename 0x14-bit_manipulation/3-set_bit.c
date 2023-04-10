#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to long int var
 * @index:  the index, starting from 0 of the bit you want to set
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int b = sizeof(unsigned long int) * 8, set_bit;

if (index >= b)
return (-1);

set_bit = 1 << index;
*n = *n | set_bit;
return (1);
}
