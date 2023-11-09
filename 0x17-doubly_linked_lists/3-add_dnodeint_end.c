#include "lists.h"

/**
 * add_dnodeint_end -  a function Add node in the end of the list
 * @head: Memory address of the head of the list
 * @n: Int data
 *
 * Return: Head of the list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newer = malloc(sizeof(dlistint_t));
	dlistint_t *last_e = *head;

	if (newer == NULL)
		return (NULL);

	newer->n = n;
	newer->next = NULL;
	newer->prev = NULL;

	if (*head == NULL)
	{
		*head = newer;
		return (newer);
	}

	while (last->next != NULL)
		last_e = last_e->next;

	last_e->next = newer;
	newer->prev = last_e;
	return (newer);
}
