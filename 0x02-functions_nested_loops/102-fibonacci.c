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
long int n1, n2, n3;
int i;

i = 3;
n1 = 1;
n2 = 2;

n3 = n1 + n2;

printf("%lu, %lu, ", n1, n2);

while (i <= 50)
{
if (i == 50)
{
printf("%lu\n", n3);
}
else
{
printf("%lu, ", n3);
}
n1 = n2;
n2 = n3;

n3 = n1 + n2;
i++;
}

return (0);
}
