#include "main.h"
#include <stdio.h>
/**
 * _strchr - Searches for a char in a string.
 * @s: string array
 * @c: character var
 * Return: c or NULL.
 */
char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (s + i);
}
return (NULL);
}
