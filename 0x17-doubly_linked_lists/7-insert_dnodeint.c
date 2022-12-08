#include "lists.h"

/**
 *insert_dnodeint_at_index- function that inserts a node at index
 *@idx: index where the node will be inserted
 *@n: data of the new node
 *@h: pointer to head node
 *Return: address to the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *h;
		*h = new;
		return (new);
	}
	for (i = 0; i < n - 2; i++)
	{
		temp = temp->next;
	}
	new->next = temp->next;
	new->prev = temp;
	temp->next->prev = new;
	temp->next = new;
	return (new);
}
