#include "lists.h"
#include <stdio.h>

/**
 * looped_in_listed_len - function that loops in the number of unique nodes
 *
 * @head: A pointer
 *
 * Return: If the list is not looped - 0.
 * else - the number of unique nodes in the list.
 */
size_t looped_in_listed_len(const listint_t *head)
{
	const listint_t *t, *h;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	t = head->next;
	h = (head->next)->next;

	while (h)
	{
		if (t == h)
		{
			t = head;
			while (t != h)
			{
				nodes++;
				t = t->next;
				h = h->next;
			}

			t = t->next;
			while (t != h)
			{
				nodes++;
				t = t->next;
			}

			return (nodes);
		}

		t = t->next;
		h = (h->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t looped_nodes, i = 0;

	looped_nodes = looped_in_listed_len(head);

	if (looped_nodes == 0)
	{
		for (looped_nodes = 0; head != NULL; looped_nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < looped_nodes; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (looped_nodes);
}

