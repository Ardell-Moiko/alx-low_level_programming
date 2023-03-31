#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: pointer to the head mode of linked list
 * Return: elements of linked list.
 */
size_t print_list(const list_t *h)
{
size_t count = 0;
const list_t *ptr = h;

while (ptr != NULL)
{
if (ptr->str != NULL)
{
printf("[%d] %s\n", ptr->len, ptr->str);
}
else
{
printf("[0] (nil)\n");
}
ptr = ptr->next;
count++;
}
return (count);
}
