#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a linked list.
 * @head: pointer to head node
 * Return: sum of all data;
 */
int sum_listint(listint_t *head)
{
listint_t *ptr = head;
int add = 0;

if (ptr == NULL)
return (0);

while (ptr != NULL)
{
add += ptr->n;
ptr = ptr->next;
}
return (add);
}
