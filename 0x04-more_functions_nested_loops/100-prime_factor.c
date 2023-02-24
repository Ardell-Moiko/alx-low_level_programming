#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
long i, lf;
long numb = 612852475143;
double sqr = sqrt(numb);

for (i = 1; i <= sqr; i++)
{
if (numb % i == 0)
{
lf = numb / i;
}
}
printf("%ld\n", lf;
return (0);
}
