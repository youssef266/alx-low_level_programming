#include "lists.h"

/**
 * free_listint_safe - a function that frees a linked list
 * @h: pointer to pointer of the pointes on the first node
 *
 * Return: the number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t l = 0;
	int d;
	listint_t *temporary;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			temporary = (*h)->next;
			free(*h);
			*h = temporary;
			l++;
		}
		else
		{
			free(*h);
			*h = NULL;
			l++;
			break;
		}
	}

	*h = NULL;

	return (l);
}

