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
int x;
for (x = 'A'; x <= 'Z'; x++)
{
char sl = tolower(x);
putchar(sl);
putchar("\n");
}
return (0);
}
