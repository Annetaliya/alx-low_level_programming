#include "lists.h"
#include <stdio.h>

/**
 *listint_len - funtion that returns length of a list
 *@h: pointer to list
 *
 *Return: length
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
