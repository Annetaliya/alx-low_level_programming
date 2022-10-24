#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - function that adds new node
 * @head: head for the new node
 * @str: assignment of new node
 *
 *Return: pointer to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	int len;
	char *dup;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;
	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;
	return (new);

}
