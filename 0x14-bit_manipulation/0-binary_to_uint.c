#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string variable containing binary.
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int dec_total = 0, bin_val = 1;
int sl = 0, i;

if (!b)
return (0);

while (b[sl])
sl++;

for (i = sl; sl >= 0; i--)
{
if (b[i] == '0' || b[i] == '1')
{
if (b[i] == '1')
dec_total += bin_val;

bin_val *= 2;
}
else
return (0);
}
return (dec_total);
}
