#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: point to the head node.
 * @idx: the index of the list where the new node should be added
 * @n: integar data of the new node.
 * Return: Always 0.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *ptr = *head, *new_node;
unsigned int i;

if (head == NULL)
return (NULL);

for (i = 0; i < idx - 1 && ptr; i++)
ptr = ptr->next;
if (i != idx - 1 && idx != 0)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
}
else if (ptr != NULL)
{
new_node->next = ptr->next;
ptr->next = new_node;
}
return (new_node);
}
