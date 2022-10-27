#include "lists.h"

/**
 *insert_nodeint_at_index - function that inserts a
 *                  node at the nth position
 *@head: pointer to the address of the head
 *       of the linked list
 *@idx: position of the list where the new node will be added
 *@n: new data for the new node
 *Return: if the function fails NULL
 * otherwise address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);
		temp = temp->next;
	}

	new->next = temp->next;
	temp->next = new;
	return (new);
}
