#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - function that prints elements
 *@h: pointer to the string
 *
 *Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;


	while (h != NULL)

	{
		if (h->str == NULL)

			printf("[0] (nil)\n");
		else
			printf(" [%d] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
