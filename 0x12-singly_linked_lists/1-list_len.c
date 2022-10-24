#include "lists.h"
#include <stdio.h>

/**
 *list_len - returns number of elements in a list
 *@h:mpointer to string
 *Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;

	}
	return (elements);
}
