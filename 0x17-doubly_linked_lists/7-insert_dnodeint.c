#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a new node in the given index
 * @h: Memory address of the head list
 * @idx: Index of the list
 * @n: New data (int)
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newer = NULL;
	dlistint_t *header = *h, *prev = *h;
	unsigned int i;

	if (h == NULL || (header == NULL && idx > 0))
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	header = header->next;
	for (i = 1; i < idx; i++)
	{
		if (prev->next == NULL)
			return (NULL);
		header = header->next;
		prev = prev->next;
	}
	if (header == NULL)
		return (add_dnodeint_end(h, n));

	newer = malloc(sizeof(dlistint_t));
	if (newer == NULL)
		return (NULL);
	newer->n = n;
	newer->next = header;
	newer->prev = prev;
	prev->next = newer;
	if (header != NULL)
		header->prev = newer;
	return (newer);
}
