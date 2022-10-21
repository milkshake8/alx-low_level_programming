#include "lists.h"
/**
 * list_len - functions that computes the number of elements in a list.
 * @h: the singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t numb_elt;

	numb_elt = 0;
	while (h != NULL)
	{
		h = h->next;
		numb_elt++;
	}
	return (numb_elt);
}
