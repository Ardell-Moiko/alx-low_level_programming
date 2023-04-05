#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees a linked list.
 * @head: pointer to head node.
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
listint_t *node_ptr;
while (head)
{
node_ptr = head;
head = head->next;
free(node_ptr);
}
head = NULL;
}
