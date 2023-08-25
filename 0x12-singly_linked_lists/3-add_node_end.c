#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - this adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *data;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	data = malloc(sizeof(list_t));
	if (!data)
		return (NULL);

	data->str = strdup(str);
	data->len = len;
	data->next = NULL;

	if (*head == NULL)
	{
		*head = data;
		return (data);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = data;

	return (data);
}
