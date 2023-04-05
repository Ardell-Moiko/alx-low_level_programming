#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list.
 * @head: points to the head node of the list.
 * @index: index of the node to be deleted.
 * Return: 1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *ptr = *head;
listint_t *rmv = NULL;

if (head == NULL || *head == NULL)
return (-1);

for (i = 1; i < index; i++)
{
if (ptr->next != NULL)
ptr = ptr->next;
else
return (-1);
}
if (index == 0)
{
rmv = ptr;
*head = (*head)->next;
}
else
{
rmv = ptr->next;
ptr->next = rmv->next;
}
free(rmv);
return (1);
}
