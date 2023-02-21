#include "main.h"

/**
 * print_sign - check the code.
 *@n: the sign to be printed.
 * Return: Always 0.
 */
int print_sign(int n)
{
if (n > 5)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else if (n == 0)
_putchar('0' + n);
return (0);
}
