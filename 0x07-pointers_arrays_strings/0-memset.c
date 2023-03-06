#include "main.h"
#include <stdio.h>

/**
 * _memset - assigns a block of mem to a constant byte.
 * @s: pointer var.
 * @b: constant var
 * @n: integer var
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
