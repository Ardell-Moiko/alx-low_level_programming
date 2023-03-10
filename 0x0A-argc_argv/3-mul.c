#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the product of two integers.
 * @argc: number of commands entered in argv
 * @argv: value of commands entered
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
int i, mul = 1;

if (argc <= 1)
{
printf("Error\n");
return (1);
}

for (i = 1; i < argc; i++)
{
mul *= atoi(argv[i]);
}
printf("%d\n", mul);
return (0);
}
