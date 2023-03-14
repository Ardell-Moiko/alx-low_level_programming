#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - check the code for ALX School students.
 * @s1: String 1
 * @s2: string 2
 * Return: string pointer.
 */
char *str_concat(char *s1, char *s2)
{
int i, len1 = 0, len2 = 0, len3 = 0;
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
for (i = 0; i < len2; i++)
{
s3[len1 + i] = s2[i];
}
s3[len3 - 1] = '\0';
return (s3);
}
