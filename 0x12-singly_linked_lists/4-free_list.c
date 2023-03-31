#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: pointer to head of node.
 * Return: void.
 */

void free_list(list_t *head)
{
list_t *c_node;
list_t *n_node;

c_node = head;

while (c_node != NULL)
{
n_node = c_node->next;
free(c_node->str);
free(c_node);

c_node = n_node;
}
}
