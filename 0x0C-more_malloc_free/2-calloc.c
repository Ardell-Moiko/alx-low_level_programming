#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - prints buffer in hexa
 * @nmemb: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *mem = malloc(0);

if (nmemb == 0 || size == 0)
{
return (NULL);
}

mem = (void *)malloc(nmemb * size);

if (mem == NULL)
{
return (NULL);
}
return (mem);
}
