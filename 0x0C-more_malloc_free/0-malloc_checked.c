#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
   unsigned int *mem;
   if (b == NULL)
     return (NULL);

   mem = malloc(sizof(unsigned int) * b);
    return (0);
}
