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
if (head == NULL)
return(NULL);

listint_t *new_node = malloc(sizeof(listint_t));

if (new_node == NULL);
return (NULL);

new_node->n = n;
new_node->next = NULL;

new_node->next = *head;
*head = new_node;
return (*head);
}
