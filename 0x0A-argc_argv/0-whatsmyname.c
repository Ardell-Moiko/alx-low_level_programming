#include "main.h"
#include <stdio.h>
/**
 * print_name - prints the name of the program.
 * @argc: number of commands entered in argv
 * @argv: value of commands entered
 * Return: Always 0
 */

int main(int argc, char* argv[])
{
  int i;

  for (i = 0; i < argc; i++)
    {
      printf("%s\n", argv[i]);
    }
  return (0);
}
