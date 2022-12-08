#include "lists.h"

/**
 *print_dlistint - function that prints a linked list
 *@h:pointer to traverse the list
 *
 *Return:The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node++;
		h = h->next;
	}
	return (node);
}
