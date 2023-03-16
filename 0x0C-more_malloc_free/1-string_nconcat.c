#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: String 1
 * @s2: string 2
 * @n: number of bytes of s2
 * Return: string pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, len1 = 0, len2 = 0, len3 = 0;
char *s3;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[len1])
len1++;
while (s2[len2])
len2++;
len3 = len1 + len2 + 1;

s3 = (char *)malloc(sizeof(char) * len3);
if (s3 == NULL)
return (NULL);
for (i = 0; i < len1; i++)
{
s3[i] = s1[i];
}
if (n >= len2)
{
for (i = 0; i < len2; i++)
{
s3[len1 + i] = s2[i];
}
s3[len3 - 1] = '\0';
}
else
{
for (i = 0; i < n; i++)
{
s3[len1 + i] = s2[i];
}
s3[len3 - 1] = '\0';
}
return (s3);
}
