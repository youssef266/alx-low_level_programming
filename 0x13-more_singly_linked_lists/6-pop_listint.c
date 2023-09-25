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
	int d;

	if (*head == NULL)
		return (0);
	listint_t *temp = *head;

	d = temp->n;
	*head = (*head)->next;
	free(temp);
	return (d);
}
