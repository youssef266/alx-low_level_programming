#include "lists.h"

/**
 * sum_listint - a function that calculates the sum of
 * all the data in a listint_t list
 * @head: pointer to the first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *temporary = head;

	while (temporary)
	{
		s += temporary->n;
		temporary = temporary->next;
	}

	return (s);
}

