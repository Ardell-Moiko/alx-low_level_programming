#include "main.h"

/**
 * _strncpy - copy a string;
 * @dest: Destination string
 * @src: source string
 * @n: integer index;
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0, j = 0;

while (src[i++])
j++;
for (i = 0; src[i] && i < n; i++)
dest[i] = src[i];
for (i = j; i < n; i++)
dest[n] = '\0';
return (dest);
}
