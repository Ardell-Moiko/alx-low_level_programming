#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
for (int x = 'A'; x <= 'Z'; x++)
{
char sl = tolower(x);
putchar(sl);
}
return (0);
}
