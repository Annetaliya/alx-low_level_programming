#include "lists.h"
#include <stdio.h>

/**
 *add_nodeint - function that adds a node
 *at the beginning of a list
 *@head: pointer to new node
 *@n: new node
 *
 *Return: pointer to main or NULL if it fails
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	new->n = n;
	new->next = *head;
	*head = new;
	if (new == NULL)
	{
		return (NULL);
	}
	return (new);
}
