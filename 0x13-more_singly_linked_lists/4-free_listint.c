#include "lists.h"

/**
 *free_listint - function that frees a linked list
 *@head: pointer to list
 *
 *Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *b;

	while (head != NULL)
	{
		b = head->next;
		free(head);
		head = b;
	}
}
