#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string pointer
 * Return: pointer.
 */
char *_strdup(char *str)
{
char *nstr;
int i, len = 1;

if (str == NULL)
return (NULL);

while (str[len])
{
len++;
}
nstr = malloc((sizeof(char) * len)+1);
if (nstr == NULL)
return (NULL);

for (i = 0; i < len; i++)
{
nstr[i] = str[i];
}

nstr[i] = '\0';
return (nstr);
}
