#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - that allocates memory using malloc.
 * @b: number of bytes allocated.
 * Return: pointer to mem address.
 */
void *malloc_checked(unsigned int b)
{
void *mem;

mem = (void *)malloc(b);

if (mem == NULL)
exit(98);
return (mem);
}
