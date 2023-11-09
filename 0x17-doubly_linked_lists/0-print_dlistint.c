#include "lists.h"

/**
 * print_dlistint - function that prints all the list elem
 * @h: Head of the linked list
 *
 * Return: Number of nodes (size_t)
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t inte = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (imte);
}
