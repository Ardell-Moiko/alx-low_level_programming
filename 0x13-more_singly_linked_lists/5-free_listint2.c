#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - Frees a linked list.
 * @head: pointer to the head node;
 * Return: Void.
 */
void free_listint2(listint_t **head)
{
listint_t *current = *head;
listint_t *node;
while (current != NULL)
{
node = current;
current = current->next;
free(node);
}
*head = NULL;
}
