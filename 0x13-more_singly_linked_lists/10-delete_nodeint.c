#include "lists.h"

/**
 *delete_nodeint_at_index - function that deletes a node
 *at a specified position
 *
 *@head: pointer to the address of the head of a list
 *@index: the position of the node
 *
 *Return: 1 if successful, -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *copy = *head;
	unsigned int i;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
	}
	temp = copy->next;
	copy->next = temp->next;
	free(temp);
	return (1);
}
