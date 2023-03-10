#include "main.h"
#include <stdio.h>
/**
 * main - prints the name of the program.
 * @argc: number of commands entered in argv
 * @argv: value of commands entered
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%d\n", i);
}
return (0);
}
