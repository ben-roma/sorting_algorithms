#include "sort.h"

/**
 * swap_nodes - Swap two nodes in a doubly linked list.
 * @a: The pointer to the first node.
 * @b: The pointer to the second node.
 *
 * Description: Swaps two nodes without modifying the integer n of the nodes.
 * Adjusts pointers to maintain the integrity of the doubly linked list.
 */
void swap_nodes(listint_t **a, listint_t **b)
{
	(*a)->next = (*b)->next;
	if ((*b)->next != NULL)
		(*b)->next->prev = *a;
	(*b)->prev = (*a)->prev;
	if ((*a)->prev != NULL)
		(*a)->prev->next = *b;
	else
		*a = *b;
	(*b)->next = *a;
	(*a)->prev = *b;
}

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm.
 * @list: Double pointer to the head of the doubly linked list.
 *
 * Description: Sorts a list by inserting elements in their correct position
 * using the insertion sort algorithm. Assumes a non-NULL list pointer.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *tmp, *previous;

	if (list == NULL || *list == NULL)
		return;

	current = (*list)->next;
	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		while (tmp->prev != NULL && tmp->prev->n > tmp->n)
		{
			previous = tmp->prev;
			swap_nodes(&previous, &tmp);
			if (previous->prev == NULL)
				*list = previous;
			print_list(*list);
		}
	}
}
