#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list.
 * @head: pointer to the head node
 * @index: index of the nth node.
 * Return: nth node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *ptr = head;
unsigned int value = 0;

if (!ptr)
return (NULL);

while (ptr)
{
if (value == index)
{
return (ptr);
}
ptr = ptr->next;
value++;
}
return (NULL);
}
