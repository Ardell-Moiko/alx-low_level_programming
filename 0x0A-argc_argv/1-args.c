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
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
