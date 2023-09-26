#include "lists.h"

/**
 * *insert_nodeint_at_index - a function that isert node to the given position
 * @head: a pointer to pointer for the linked list
 * @n: var for the data inserted to the node
 * @idx: index where the new node is added
 * Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int e;
	listint_t *newer;
	listint_t *temporary = *head;

	newer = malloc(sizeof(listint_t));
	if (!newer || !head)
		return (NULL);

	newer->n = n;
	newer->next = NULL;

	if (idx == 0)
	{
		newer->next = *head;
		*head = newer;
		return (newer);
	}

	for (e = 0; temporary && e < idx; e++)
	{
		if (e == idx - 1)
		{
			newer->next = temporary->next;
			temporary->next = newer;
			return (newer);
		}
		else
			temporary = temporary->next;
	}

	return (NULL);
}

