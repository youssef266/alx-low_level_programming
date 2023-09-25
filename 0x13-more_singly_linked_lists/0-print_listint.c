#include "lists.h"
/**
 * print_listint - a function that prints all the elements of
 * a listint_t list.
 * @h: the linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t number = 0;

		while (h != NULL)
		{
			printf("%d\n", h->n);
			number++;
			h = h->next;
		}
		return (number);
}

