#include "lists.h"

/**
 *sum_listint - function that gets the sum of nodes
 *@head: pointer to linked list
 *Return: sum of nodes or 0 if list is empty
 *
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		if (head == NULL)
		{
			return (0);
		}
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
