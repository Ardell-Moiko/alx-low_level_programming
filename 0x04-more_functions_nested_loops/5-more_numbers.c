#include "main.h"

/**
 * more_numbers - Print 0 to 14 ten times
 *
 * Return: void.
 */
void more_numbers(void)
{
int x, y;
for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 14; y++)
{
_putchar('0' + y);
_putchar('0' + (y % 10));
}
_putchar('\n');
}
}
