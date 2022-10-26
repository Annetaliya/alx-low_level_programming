#include "lists.h"

/**
 *get_nodeint_at_index - function that returns nth node
 *@head: pointer to the address of the head of the list
 *@index: position of a node
 *Return: a node or NULL if node is not found
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
