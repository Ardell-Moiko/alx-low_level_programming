#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator:  the string to be printed between numbers
 * @n: Number of arguments
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i, num;

va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
num = va_arg(args, unsigned int);
printf("%d", num);
if (separator != NULL)
{
if (i != (n - 1))
{
printf("%s", separator);
}
}
else
continue;
}
printf("\n");
}
