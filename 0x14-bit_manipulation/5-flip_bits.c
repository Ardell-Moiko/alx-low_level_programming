#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int b = sizeof(unsigned long int) * 8, swtch = n ^ m;
unsigned long int bit = 1;
unsigned int count = 0, i = 0;

while (i < b)
{
if (swtch & bit)
count++;

bit <<= 1;

i++;
}

return (count);
}
