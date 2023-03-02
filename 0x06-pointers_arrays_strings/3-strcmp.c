#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compare two strings.
 * @s1: string 1
 * @s2: s2;
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
int flag = 0, i = 0;

while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[1] != s2[i])
{
flag = (*s1 - *s2);
break;
}
i++;
}
if (flag == 0)
return (0);
else
return (*s1 - *s2);
}
