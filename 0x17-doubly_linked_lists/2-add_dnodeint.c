#include "lists.h"

/**
 * add_dnodeint - function add node to the end of the file
 * @head: Memory of the Head of the linked list
 * @n: Int data
 *
 * Return: Head of the list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newer = malloc(sizeof(dlistint_t));

	if (head == NULL || newer == NULL)
		return (NULL);

	newer->n = n;
	newer->prev = NULL;
	newer->next = NULL;

	if (*head != NULL)
	{
		newer->next = *head;
		(*head)->prev = newer;
	}

	*head = newer;

	return (*head);
}
