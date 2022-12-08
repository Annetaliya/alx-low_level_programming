#include "lists.h"

/**
 *get_dnodeint_at_index - function that gets the nth node
 *@head: pointer to list
 *@index: position to get node
 *
 *Return: pointer to nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
