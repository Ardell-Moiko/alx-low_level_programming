#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint -prints all the elements of a linked list.
 * @h: head node pointer.
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
int count = 0;
const listint_t *ptr = h;

while (ptr != NULL)
{
printf("%d\n", ptr->n);
count++;
ptr = ptr->next;
}
return (count);
}
