#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list.
 * @head: pointer to the head node.
 * @n: integar data.
 * Return: Always 0.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *end_node, *ptr;
ptr = *head;
end_node = malloc(sizeof(listint_t));

if (end_node == NULL)
return (NULL);

end_node->n = n;
end_node->next = NULL;

while (ptr->next != NULL)
{
ptr = ptr->next;
}
ptr->next = end_node;
return (end_node);
}
