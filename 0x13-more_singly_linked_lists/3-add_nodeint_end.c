#include "lists.h"

/**
 * *add_nodeint_end - a function that adds a new node at
 * the end of a listint_t list.
 *
 * @head: a pointer to pointer to the first element in the list
 * @n: var to data inserted
 *
 * Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newer;
	listint_t *temporary = *head;

	newer = malloc(sizeof(listint_t));
	if (!newer)
		return (NULL);

	newer->n = n;
	newer->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temporary->next)
		temporary = temporary->next;

	temporary->next = newer;

	return (newer);
}

