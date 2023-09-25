#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: a pointer to pointer
 *
 * Return: 0 if the linked list is empty
*/
int pop_listint(listint_t **head)
{
	listint_t *temporary;
	int i;

	if (!head || !*head)
		return (0);

	i = (*head)->n;
	temporary = (*head)->next;
	free(*head);
	*head = temporary;

	return (i);

}
