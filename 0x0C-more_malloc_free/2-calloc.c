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
int i, arr_len;
char *mem;

if (nmemb == 0 || size == 0)
{
return (NULL);
}

arr_len = nmemb * size;

mem = malloc(arr_len);

if (mem == NULL)
{
return (NULL);
}

for (i = 0; i < arr_len; i++)
{
mem[i] = 0;
}
return (mem);
}
