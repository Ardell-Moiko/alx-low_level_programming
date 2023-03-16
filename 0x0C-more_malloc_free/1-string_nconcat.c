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
unsigned int i = 0, len1 = 0, len2 = 0, len3 = 0;
char *s3;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1])
len1++;
while (s2[len2])
len2++;

if (n >= len2)
len3 = len1 + len2;
else
len3 = len1 + n;

s3 = malloc(sizeof(char) * len3 + 1);
if (s3 == NULL)
return (NULL);

len2 = 0;
while (i < len3)
{
if (i <= len1)
s3[i] = s1[i];
if (i >= len1)
{
s3[i] = s2[len2];
len2++;
}
i++;
}
s3[i] = '\0';
return (s3);
}
