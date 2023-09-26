#include "lists.h"

/**
 * reverse_listint - a function that reverses a linked list
 * @head: pointer to pointer of the first node in the list
 *
 * Return: a pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->n = previous;
		previous = *head;
		*head = n;
	}

	*head = previous;

	return (*head);
}

