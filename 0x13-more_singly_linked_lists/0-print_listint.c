#include "lists.h"
#include <stdio.h>

/**
 *print_listint - function that prints integers in a list
 *@h: pointer to start of linked list
 *
 *Return: size of a node
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);

}
