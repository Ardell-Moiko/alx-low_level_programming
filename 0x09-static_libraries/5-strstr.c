#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring.
 * @haystack: first string
 * @needle: second string
 * Return: string or null
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *hay = haystack;
char *ned = needle;

while (*hay == *ned && *ned != '\0')
{
hay++;
ned++;
}
if (*ned == '\0')
return (haystack);
}
return (NULL);
}
