#include "main.h"
#include <stdio.h>

/**
 * _strspn - length of prefix substring
 * @s: String array
 * @accept: accept ref array.
 * Return: Always len of prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, match;
unsigned int prelen = 0;

for (i = 0; s[i]; i++)
{
match = 0;
for (j = 0; accept[j]; j++)
{
if (accept[j] == s[i])
{
prelen++;
match = 1;
}
}
if (match == 0)
break;
}
return (prelen);
}
