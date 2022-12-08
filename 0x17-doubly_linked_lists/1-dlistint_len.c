#include "lists.h"

/**
 *dlistint_len - function that returns length of a list
 *@h: pointer to linked list
 *
 *Return:length of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
