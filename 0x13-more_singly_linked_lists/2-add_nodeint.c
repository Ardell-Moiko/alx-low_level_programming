#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to head node
 * @n: data to be assigned to new node.
 * Return: Always 0.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
new_node->n = n;
new_node->next = NULL;

if (head && n)
{
new_node->next = *head;
*head = new_node;
return (*head);
}
else
return (NULL);
}
