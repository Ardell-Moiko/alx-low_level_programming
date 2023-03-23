#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print_strings
 * @separator: the string to be printed between the strings
 * @n: number of arguements
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;

va_list args;
va_start(args, n);

for (i = 0; i < n; i++)
{
str = va_arg(args, char *);
if (str == NULL)
{
str = "(nil)";
}
printf("%s", str);
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
