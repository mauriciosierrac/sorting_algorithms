#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of ints
 * @list: doubly linked list
 * Return: void print the list
 */


void insertion_sort_list(listint_t **list)
{
	if (list == NULL || (*list) == NULL || (*list)->next == NULL)
		return;
	burger = *list;
	while (beer)
	{
		beer = (*list)->next;

		while (burger->prev && (burger->n < burger->prev->n))
		{
			burger->prev->next = burger->next;
			if (burger->next)
				burger->next->prev = burger->prev;
			burger->prev = burger->next->prev;
			burger->next = burger->prev;
			if (burger->prev)
				burger->prev->next = burger;
			else
				*list = burger;
			burger->next->prev = burger;
			print_list(*list);
		}
	}
}
