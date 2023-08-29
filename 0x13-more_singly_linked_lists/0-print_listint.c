#include "lists.h"

/**
 * print_listint - prints the elements of a linked list
 * @h: linked list of type listint_t
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *a)
{
	size_t num = 0;

	while (a)
	{
		printf("%d\n", a->n);
		num++;
		a = a->next;
	}

	return (num);
}
