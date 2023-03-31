#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head pointer
 * @str: pointer to string data
 * Return: address of new element.
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
	int len_str = 0;

	new_node = (list_t *) malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (str[len_str] != '\0')
	len_str++;

	new_node->len = len_str;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
