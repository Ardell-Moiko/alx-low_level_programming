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
int n, u = 0;
while (n < 1024)
{
if ((n % 3 == 0) || (n % 5 == 0))
{
u += n;
}
u++;
}
printf("%d\n", u);
return (0);
}
