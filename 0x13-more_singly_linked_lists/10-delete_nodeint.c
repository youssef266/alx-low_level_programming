#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes
 * the node in a linked list at a certain index
 * @head: pointer to pointer of first element in the list
 * @index: index of the node to delete
 *
 * Return: -1 if it failed, 1 if succees
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temporary = *head;
	listint_t *c = NULL;
	unsigned int e = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temporary);
		return (1);
	}

	while (e < index - 1)
	{
		if (!temporary || !(temporary->next))
			return (-1);
		temporary = temporary->next;
		e++;
	}


	c = temporary->next;
	temporary->next = c->next;
	free(c);

	return (1);
}

