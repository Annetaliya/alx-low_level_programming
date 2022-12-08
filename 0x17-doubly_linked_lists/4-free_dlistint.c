#include "lists.h"

/**
 *free_dlistint - function that frees a list
 *@head: pointer to linked list
 *
 *Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (temp != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}

}
