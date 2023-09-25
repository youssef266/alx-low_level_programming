#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 *
 * @head: a pointer to pointer of the listint_t list.
 *
 * Return: the pointer head to NULL.
*/
void free_listint2(listint_t **head)
{
	listint_t *temporary;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temporary = (*head)->next;
		free(*head);
		*head = temporary;
	}

	*head = NULL;
}

