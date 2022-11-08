#include "sort.h"
/**
 * insertion_sort_list - insertion sort for a doubly-linked list
 * @list: address of pointer to head node
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node_1, *node_2;
	int temp;

	if (!list || !*list || !(*list)->next)
		return;
	node_1 = (*list)->next;
	while (node_1)
	{
		node_2 = node_1;
		node_1 = node_1->next;
		while (node_2 && node_2->prev)
		{
			if (node_2->prev->n > node_2->n)
			{
				temp = node_2->prev->n;
				node_2->prev->n = node_2->n;
				node_2->n = temp;
				if (!node_2->prev)
					*list = node_2;
				print_list((const listint_t *)*list);
			}
			else
				node_2 = node_2->prev;
		}

	}
}
