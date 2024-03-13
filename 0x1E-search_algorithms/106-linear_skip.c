#include "search_algos.h"

/**
 * linear_skip - searches for a value in a skip list
 *
 * @list: input list
 * @value: value to search in
 * Return: index of the number
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *go_l;

	if (list == NULL)
		return (NULL);

	go_l = list;

	do {
		list = go_l;
		go_l = go_l->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)go_l->index, go_l->n);
	} while (go_l->express && go_l->n < value);

	if (go_l->express == NULL)
	{
		list = go_l;
		while (go_l->next)
			go_l = go_l->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)go_l->index);

	while (list != go_l->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
