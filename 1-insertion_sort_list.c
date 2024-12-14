#include "sort.h"

/**
 * swap - Algorithm that uses swap two consecutive nodes in the list
 * @list: pointer to list
 * @node1: pointer to list
 * @node2: pointer to list
 * Return: Void
 */

void swap(listint_t **list, listint_t *node1, listint_t *node2)
{
	if (!node1 || !node2)
		return;
	if (node1->next != node2)
		return;

	if (node1->prev)
		node1->prev->next = node2;
	else
		*list = node2;

	if (node2->next)
		node2->next->prev = node1;

	node1->next = node2->next;
	node2->prev = node1->prev;

	node2->next = node1;
	node1->prev = node2;
}

/**
 * insertion_sort_list - Algorithm that uses insertion sort to order a list
 * @list: pointer to list
 * Return: Void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *recorre, *temporal;

	if (!list || !*list || !(*list)->next)
		return;

	recorre = (*list)->next;

	while (recorre)
	{
		temporal = recorre;
		recorre = recorre->next;

		while (temporal->prev && temporal->n < temporal->prev->n)
		{
			swap(list, temporal->prev, temporal);
			print_list(*list);
		}
	}
}
