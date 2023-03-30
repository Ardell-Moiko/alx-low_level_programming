#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the head of linked list
 * Return: length of linked list.
 */
size_t list_len(const list_t *h)
{
list_t count;
count.len = 0;
while (h != NULL)
{
count.len++;
h = h->next;
}
return (count.len);
}

