#include "main.h"

/**
 * puts2 - check the code
 * @str: string pointer var
 * Return: Always 0.
 */
void puts2(char *str)
{
int x, y = 0;
while (str[y] != '\0')
y++;

for (x = 0; x < y; x += 2)
{
_putchar(str[x]);
}
_putchar('\n');
}
