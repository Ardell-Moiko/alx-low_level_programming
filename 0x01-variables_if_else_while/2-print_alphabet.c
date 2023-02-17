#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
for (int x = 'A'; x <= 'Z'; x++)
{
char smaller = tolower(x);
putchar(smaller);
}
return (0);
}
