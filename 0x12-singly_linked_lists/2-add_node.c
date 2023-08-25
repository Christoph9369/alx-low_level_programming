#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - this adds a new node at the start of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *data;
	unsigned int len = 0;

	while (str[len])
		len++;

	data = malloc(sizeof(list_t));
	if (!data)
		return (NULL);

	data->str = strdup(str);
	data->len = len;
	data->next = (*head);
	(*head) = data;

	return (*head);
}
