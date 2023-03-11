#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the sum of integers.
 * @argc: number of commands entered in argv
 * @argv: value of commands entered
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
int i, sum = 0;

if (argc <= 1)
{
printf("0\n");
}
for (i = 1; i < argc; i++)
{
if (argv[i] < 48 || argv[i] > 57)
{
printf("Error\n");
return 1;
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
