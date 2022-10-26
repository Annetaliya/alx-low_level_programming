#include "lists.h"
#include <stdio.h>

/**
 *add_nodeint_end - function that adds node at the end
 *@head: points to last node
 *@n: last node to be added
 *
 *Return: a pointer to the last address or Null if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));

	last = *head;
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (NULL);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	if (new == NULL)
	{
		return (NULL);
	}
	return (new);

}
