#include "main.h"

/**
 * print_last_digit - check the code
 * @x: integer
 * Return: Always 0.
 */
int print_last_digit(int x)
{
/*ld stores the last digit of x*/
int ld;
ld = x % 10;
if (ld < 0)
{
ld = ld * -1;
}
_putchar('0' + ld);
return (ld);
}
