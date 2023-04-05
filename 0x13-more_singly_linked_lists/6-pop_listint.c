#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * and returns the head node’s data
 * @head: pointer to head node.
 * Return: data of head node.
 */
int pop_listint(listint_t **head)
{
listint_t *ptr = *head;
int n;

if (*head == NULL)
return (0);

n = ptr->n;
ptr = ptr->next;
free(ptr);
ptr = *head;
return (n);
}
