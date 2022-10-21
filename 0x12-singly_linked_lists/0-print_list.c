#include "lists.h"
/**
 * print_list - funtion that prints all the elements of list.
 * @h: points to the singly linked list.
 * Return: number of elements in the list.
 */

size_t print_list(const list_t *h)
{
	size_t numb_elt;

	numb_elt = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		numb_elt++;
	}
	return (numb_elt);
}
