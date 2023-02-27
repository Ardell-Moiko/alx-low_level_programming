#include "main.h"
#include <stdio.h>

/**
 * _strlen - Length of a string
 * @s: string used.
 * Return: Always length.
 */
int _strlen(char *s)
{
int len = 0;

while (*s++)
len++;
return (len);
}
