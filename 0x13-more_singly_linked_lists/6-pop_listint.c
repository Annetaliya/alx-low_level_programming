#include "lists.h"

/**
 *pop_listint - function that deletes the first node
 *@head: pointer to linked list
 *
 *Return:data of head if empty 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int ret;

	if (*head == NULL)
		return (0);

	temp  = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(temp);
	return (ret);
}
