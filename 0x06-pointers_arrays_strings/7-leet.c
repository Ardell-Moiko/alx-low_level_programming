#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string to 1337
 * @s: string var.
 * Return: Always 0.
 */
char *leet(char *s)
{
char *result = s;
char a[] = { 'a', 'e', 'o', 't', 'l' };
char n[] = { 4, 3, 0, 7, 1 };
int i = 0;
while (*s)
{
for (i = 0; i < 5; i++)
{
if (*s == a[i] || *s == a[i] - 32)
*s = n[i] + '0';
}
s++;
}
return (result);
}
