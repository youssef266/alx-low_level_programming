#include "lists.h"

/**
 * *get_nodeint_at_index - a function that returns the nth
 * node of a listint_t linked list.
 *
 * @head: pointer to listint_t linked list.
 * @index:  is the index of the node, starting at 0
 *
 * Return: NULL if the node does not exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int number = 0;
	listint_t *temporary = head;

	while (temporary && number < index)
	{
		temporary = temporary->next;
		number++;
	}

	return (temporary ? temporary : NULL);


}
