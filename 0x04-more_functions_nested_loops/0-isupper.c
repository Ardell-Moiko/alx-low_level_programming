#include "main.h"
#include <stdio.h>

/**
 * _isupper - check uppercase character.
 * @c: character to be checked.
 * Return: Always 0.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
return (0);
}
