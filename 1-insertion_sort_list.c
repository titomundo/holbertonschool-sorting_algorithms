#include "sort.h"

/**
* insertion_sort_list - displays the insertion sort algorithm in a doubly list
* @list: list to sort
*
* Return: void
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *cur, *index, *next, *aux, *dum;

	if (!list)
		return;

	dum = malloc(sizeof(listint_t));
	if (!dum)
		return;
	dum->next = *list;
	index = *list;
	cur = index->next;

	while (cur)
	{
		next = cur->next;

		if (index->n < cur->n)
			index = cur;
		else
		{
			aux = dum;
			if (cur->next)
				cur->next->prev = cur->prev;
			if (cur->prev)
				cur->prev->next = cur->next;
			while (aux->next && aux->next->n <= cur->n)
				aux = aux->next;
			if (aux->next)
				aux->next->prev = cur;
			if (!aux->prev)
				*list = cur;

			cur->next = aux->next;
			aux->next = cur;
			cur->prev = aux;
			print_list(*list);
		}
		cur = next;
	}
	free(dum);
}
